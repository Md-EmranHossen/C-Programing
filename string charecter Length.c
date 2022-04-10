#include<stdio.h>
int main()
{
    char ch[100]="Emran Hossen";
    int i=0;
    int count=0;
    while(ch[i]!='\0')
    {
        i++;
        count++;
    }
    printf("The Length is:%d",count);
}
