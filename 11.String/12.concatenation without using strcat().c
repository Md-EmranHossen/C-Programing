/*

1)Why use concatenation?
2)How use Concatenation without Strcat?
3)What is Concatenation?

*/

#include<stdio.h>
int main()
{
    char A[50]= {"Myself Emran."};
    char B[]= {"I am from Jamalpur"};

    int i=0,len=0,j=0;

    while(A[i]!='\0')
    {
        i++;
        len++;
    }


    while(B[j]!='\0')
    {
        A[len+j]=B[j];
        j++;
    }

    printf("%s",A);

   getch ();

}
