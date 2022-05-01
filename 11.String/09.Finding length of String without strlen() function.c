/*

Why we determine string length with out strlen() function?

*/
#include<stdio.h>
int main()
{
    char ch[]= {"Emran Hossen"};
    int i=0,count=0;

    while(ch[i]!='\0')
    {
        i++;
        count++;
    }

    printf("The Length is:%d",count);
    getch();

}
