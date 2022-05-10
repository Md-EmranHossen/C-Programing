#include<stdio.h>
int main()
{
    int a=30,b=40;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("The Sum is:%d\n",*ptr1+*ptr2);

    getch();
}
