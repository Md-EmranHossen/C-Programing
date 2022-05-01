/*
Why use input function in a string?
How use input function in a string?
What is the name of the input function in a string?

*/

#include<stdio.h>
int main()
{
    char ch[30];
    printf("Enter Your University Name:");

    gets(ch);

    printf("%s",ch);


    return 0;
}
