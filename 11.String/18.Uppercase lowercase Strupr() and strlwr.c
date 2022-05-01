/*

What are the name of the function to convert uppercase to lowercase and lowercase to uppercase?

*/
#include<stdio.h>
int main()
{
    char A[]= {"emRaN hoSsEn"};

    strupr(A);
    printf("%s\n",A);

    strlwr(A);
    printf("%s\n",A);

    return 0;
}
