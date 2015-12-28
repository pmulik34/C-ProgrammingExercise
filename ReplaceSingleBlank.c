#include<stdio.h>
main()
// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. 
{
	int c, interpace;
	interpace=0;
	while ((c=getchar())!=EOF)
	{
		if (c==' ')
		{
			if (interpace==0)
			{
				putchar(c);
				interpace=1;
			}
		}
		else 
		{
			putchar(c);
			interpace=0;
		}
	}
}
