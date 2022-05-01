/*

Which steps do you need to follow to determine palindrome?

*/



#include<stdio.h>
int main()
{
    int i=0,j,len=0;
    char A[30];
    char B[30];
    printf("Enter Anything :");

    scanf("%[^\n]",&A);

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

    int d=strcmp(A,B);

    if(d==0)
    {
        printf("String is Palindrome");
    }


    else
    {
        printf("String is not Palindrome");
    }

    getch();

}

