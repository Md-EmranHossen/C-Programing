#include<stdio.h>
int main()
{
    char ch[30];
    printf("Please Enter The Full Name:");
    scanf("%s",&ch); // scanf function can not work after space
    printf("Your Name is:%s",ch);
    return 0;

}
