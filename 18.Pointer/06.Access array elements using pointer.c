#include<stdio.h>
int main()
{
    int a[5]={10,39,59,40,59},i;

    int *ptr;

    ptr=&a[0];

    for(i=0;i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;

    }


        getch();
}
