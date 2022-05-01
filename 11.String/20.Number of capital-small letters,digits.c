#include<stdio.h>
int main()
{
    int i,capital,small,digit;
    char A[100],ch;

    i=capital=small=digit=0;

    printf("Enter Your String:\n");
    scanf("%[^\n]",&A);

    while((ch=A[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;

        else if(ch>=97 && ch<=120)
            small++;

        else if(ch>=48 && ch<=57)
            digit++;


        i++;
    }

    printf("Number of Capital letter:%d\n",capital);
    printf("Number of Small letter:%d\n",small);
    printf("Number of digit letter:%d\n",digit);

}
