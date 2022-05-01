#include<stdio.h>
int main()
{
    char A[]= {"Intake-49-02"};
    char B[]= {"Intake-49-0"};


    int C = strcmp(A,B);


    if(C==0)
    {
        printf("Strings are Equal");
    }


    else
    {
        printf("Strings are Not Equal");
    }


    getch ();

}
