/*

Pointer is a variable that store/Points the
address of another variable

*=asterisk sign

& for address.
* for address value.

*/

#include<stdio.h>
int main()
{
    int x=5;

    int *p;
    p=&x;

    printf("Vlue of X:%d\n",x);
    printf("Address of X Variable:%d\n",&x);
    printf("Value of Pointer:%d\n",p);
    printf("pointer location Value:%d\n",*p);
    printf("Address of pointer Variablr:%d\n",&p);


    return 0;


}
