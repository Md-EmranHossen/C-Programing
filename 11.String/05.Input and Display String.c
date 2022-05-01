#include<stdio.h>
int main()
{
    char ch[30];
    printf("Please Enter Your Full Name:");
    scanf("%[^\n]",&ch);

    printf("%s",ch);

    return 0;
}
