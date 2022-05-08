/*

Like structure ,union is a user defined data type,
In union,all members share the same location.

*/

// All the union members share the same memory location.

/*

Union can be useful in many situation where want to be use same
memory for two or more members.EX:Tree

*/


#include<stdio.h>

union test
{
    int x,y;
};

int main()

{
    union test t1;

    t1.x=5;

    printf("X is:%d\n",t1.x);
    printf("Y is:%d\n",t1.y);

    t1.y=7;
    printf("\nX is:%d\n",t1.x);
    printf("Y is:%d\n",t1.y);


    getch ();
}
