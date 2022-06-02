/*
File is a place on disk where a
group  of related data is stored.

File is a structure which is stored stdio.h header.
*/

#include<stdio.h>
int main()
{
    FILE *file;
    file =fopen("test.txt","w");

    //File Name:test
    //Extension:.txt
    //"w":Mode

    if(file=NULL)
        printf("File does not Exist");

    else
    {
        printf("File is Open");
        fclose(file);
    }

    getch();
}
