/*

Why we display string character wise?
Explain this process?

*/


#include<stdio.h>
int main()
{
    char ch[]= {"Emran Hossen"};
    int i;

    while(ch[i]!='\0')
    {
        printf("%c\n",ch[i]);
        i++;
    }

    return 0;
}
