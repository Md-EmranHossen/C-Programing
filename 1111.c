#include<stdio.h>
int main()
{
    char ch;
    printf(" Enter A Charecter:\n");
    scanf("%c",&ch);

    if( ch==33|| ch==34 ||  ch==39|| ch==40||  ch==41|| ch==44 || ch==45 || ch==46 || ch==58 || ch==59 || ch==63 || ch==95)
    {
        printf("This is Charecter");
    }
    else
        printf("This is not charecter");

}
