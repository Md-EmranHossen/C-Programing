#include<stdio.h>
int main()
{
    int x,y,temp;
    int *ptr1,*ptr2;

    printf("Enter the value of X:\n");
    scanf("%d",&x);

    printf("Enter the value of Y:\n");
    scanf("%d",&y);

    ptr1=&x;
    ptr2=&y;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("X=%d\nY=%d",*ptr1,*ptr2);


    getch();

}
