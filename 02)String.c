#include<stdio.h>
int main()
{
    char ch[30];
    printf("Please Enter The Full Name:");
    scanf("%[^\n]",&ch);

    /* scanf function can not work after space,but if we use [^\n] this
    symbol that function work*/

    printf("Your Name is:%s",ch);
    return 0;

}
