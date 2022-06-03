#include<stdio.h>
int main()
{
    FILE *file;
    file =fopen("test.txt","w");

    char name[49];
    int age;

    if(file==NULL)
    {
        printf("File does not Exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter Your Name:");
        gets(name);
        printf("Enter Your age:");
        scanf("%d",&age);

        fprintf(file,"Name:%s\nAge:%d",name,age);
        printf("File is written successfully");
        fclose(file);
    }
    getch();
}
