/*

Why we swap a string in a program?

*/


#include<stdio.h>
int main()
{
    char A[30]= {"Emran Hossen"};
    char B[30]= {"Syma Sultana"};
    char temp[30];


    printf("Before swapping:\n");
    printf("A:%s\n",A);
    printf("B:%s\n\n",B);


    strcpy(temp,A);
    strcpy(A,B);
    strcpy(B,temp);


    printf("After swapping:\n");
    printf("A:%s\n",A);
    printf("B:%s\n",B);

    getchar();


}
