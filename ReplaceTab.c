#include<stdio.h>
main()

// Exercise 1_10. Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an unambiguous way.

{
  int c;
	while ((c=getchar())!=EOF)
	{
		if(c=='\b')
			printf("\\b");
		if(c=='\\')
			printf("\\\\");
		if(c=='\t')
			printf("\\t");		//搞不清楚为什么先放制表符的语句的话，结果会有跟输入一样的制表格式
		
		else
			putchar(c);
	}
}
/*
	int c, d;

    while ( (c=getchar()) != EOF) {
        d = 0;
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            d = 1;
        }
        if (d == 0)
            putchar(c);        
    }
    return 0;
}
*/