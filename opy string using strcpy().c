
#include<stdio.h>
int main()
{
    char source[]="My Name is Emran";
    char targer[49];

    strcpy(targer,source);
    printf("The sentence is:%s\n",source);
    printf("The Sentene is:%s\n",targer);

    return 0;
}
