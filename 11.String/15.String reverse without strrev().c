/*

How we reverse a String in a program without strrev() function?

*/



#include<stdio.h>
int main()
{
    int i=0,j,len=0;
    char A[13]= {"Emran Hossen"};
    char B[13];

    while(A[i]!=0)
    {
        i++;
        len++;
    }


    for(j=0,i=len-1; i>=0; i--,j++)
    {
        B[j]=A[i];
    }

    B[j]='\0';

    printf("A:%s\n",A);
    printf("B:%s\n",B);

    getch();

}
