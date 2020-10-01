// Exercise 1-12. Write a program that prints its input one word per line
#include<stdio.h>
int main()
{
    char input[100];
    int index;

    printf("Enter the string value :");
    gets(input);

    for(index = 0; input[index]!='\0';index++)
    {
        printf("%c",input[index]);
        printf("\n");
    }
    printf("Done!");
    return 0;
}
