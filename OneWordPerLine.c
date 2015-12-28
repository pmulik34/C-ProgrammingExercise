#include <stdio.h>
#define INPACE 1
#define OUTPACE 0
// Exercise 1-12. Write a program that prints its input one word per line
main()
{
	int c, state;
	state=OUTPACE;
	while ((c=getchar())!=EOF)
	{
		if (c==' '||c=='\n'||c=='\t')
		{
			
			if (state==OUTPACE)
				putchar('\n');
			state=INPACE;
		}
		else 
		{
			state=OUTPACE;
			putchar(c);
			
		}
	}
}
