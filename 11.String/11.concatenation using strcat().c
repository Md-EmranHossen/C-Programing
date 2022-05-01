/*

1)Why use concatenation?
2)How use Concatenation?
3)What is Concatenation?

*/

#include<stdio.h>
int main()
{
    char A[]= {"Myself Emran Hossen. "};
    char B[]= {"I am from Jamalpur"};

  //  strcat(A,B);
    strcat(A,"I am from Jamalpur");

    printf("%s",A);

    getch ();

}
