#include<stdio.h>
int main()
{
    char name[48];
    FILE *file;
    file=fopen("test.txt","a"); //a or r


    if(file==NULL)
    {
        printf("File doesn't Exist");
    }


    else
    {
        printf("File is Opened\n");
        printf("Enter Your Name:");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is written Successfully\n");
        fclose(file);
    }

    getch();
}
