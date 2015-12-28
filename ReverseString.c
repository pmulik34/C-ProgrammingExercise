# include <stdio.h>

// Exercise 1-19 Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time.

int getline (char s[]);
void reverse (char s[]);
void discardnewline (char s[]);
void discardtable (char s[]);

int getline (char s[])
{
	int c, i;
	for (i=0; i<1000 && (c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
	if (c=='\n')
		s [i++] = c;
	s[i] = '\0';
	return i;
}

void discardnewline (char s[])
{
	int i;
	for (i=0; s[i]!='\0'; i++)
	{
		if (s[i]=='\n')
			s[i]='\0';
	}
}

void reverse (char s[])
{
	int i, j;
	char ch;
	for (j=0; s[j]!='\0'; j++)
		;
	j--;
	for (i=0; i<j; i++)
	{
		ch = s[i];
		s[i]=s[j];
		s[j]= ch;
		j--;
	}
}

void discardtable(char s[])
{
	int i=0;
	int	j;
	
	while (s[i]!='\0')
	{
	if (s[i]==' ' || s[i]=='\t')
	{
		for (j=0; s[j]!='\0'; j++)
			s[j]=s[j+1];	
	}
	}


}

main()
{
	char line[1000];

	while (getline(line)>0)
	{
	discardnewline(line);
	reverse(line);
	discardtable (line);
	reverse(line);
	printf("%s\n", line);
	}
	return 0;
}