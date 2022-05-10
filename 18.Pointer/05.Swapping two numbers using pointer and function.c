#include<stdio.h>
void swapping(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}


int main()


{
    int x=69,y=89;

    printf("Before Swapping\nX:%d\nY=%d\n",x,y);
    swapping(&x,&y);


    printf("After Swapping\nX:%d\nY=%d\n",x,y);


    getch();

}
