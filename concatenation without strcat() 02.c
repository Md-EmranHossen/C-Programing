#include<stdio.h>
int main()
{
    char a[40]="My name is ";
    char b[]="Emran";

    int i=0,j=0,len=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }

    while(b[j]!='\0')
    {
        a[len+j]=b[j];

        j++;
    }
    printf("%s\n",a);

    return 0;
}
