#include <stdio.h>

// Exercise 1-9_1. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. 

main()
{
	int c, interpace;
	interpace=0;
	while ((c=getchar())!=EOF)
	{
		if (c==' ')
		{
			if (interpace==0)
				putchar(c);
			interpace=1;
		}
		else 
		{
			putchar(c);
			interpace=0;
		}
	}
}