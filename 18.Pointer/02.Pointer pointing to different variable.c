#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;

    int *ptr;
    ptr=&x;
    printf("%d\n",*ptr);

    ptr=&y;
    printf("%d\n",*ptr);

    ptr=&z;
    printf("%d\n",*ptr);

    getch();
}
