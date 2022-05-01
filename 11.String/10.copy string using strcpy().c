/*

Why we copy string in a program?
How we copy string in a program?
What is the name of the function to copy string?

*/




#include<stdio.h>
int  main()
{
    char A[]= {"Zero To Infinity"};
    char B[30];

    strcpy(B,A);

    printf("A:%s\n",A);
    printf("B:%s",B);

    getch ();
}
