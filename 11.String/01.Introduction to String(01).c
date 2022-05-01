/*

1)What is Null character?
2)What are the reason for the garbage value in the program?

*/
#include<stdio.h>
int main()
{
    char ch[4];
    ch[0]='E';
    ch[1]='M';
    ch[2]='R';
    ch[3]='A';
    ch[4]='N';

    printf("%s",ch);

    return 0;

}

