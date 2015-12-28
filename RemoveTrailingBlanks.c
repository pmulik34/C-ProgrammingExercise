#include <stdio.h>

// Exercise 1-18. Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines.

int getline (char s[]);
void deletetable (char s[]);

int getline (char s[])
{
	int i,c;
	for (i=0; i<1000 && (c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
	if (c=='\n')
		s [i++] = c;
	s[i] = '\0';
	return i;
}

void deletetable (char s[])
{
	int i;
	for (i=0; s[i]!='\n'; i++)
		;
	i--;
	while (i>0 && (s[i]==' '||s[i]=='\t'))
		i--;
	if (i>=0)
	{
		i++;
		s[i++]='\n';
		s[i]='\0';
	}
}

main()
{
	char line [1000];
	while (getline(line)>0)
	{
		deletetable (line);
		printf ("%s", line);
	}
}