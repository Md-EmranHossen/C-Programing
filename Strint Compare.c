#include<stdio.h>
int main()
{
    char string1[]="Emran Hossen";
    char string2[]="Syma sultana";

    int a=strcmp(string1,string2);

    if(a==0)
    {
        printf("Strings Are Equal");

    }
    else
    {
        printf("Strings Are Not Equal");

    }


}
