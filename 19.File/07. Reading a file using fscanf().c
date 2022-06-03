#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("test.txt","r");

    char ch[48];
    char ch1[48];
    int age;

    if(file==NULL)
    {
        printf("File doesn't Exist");

    }

    else
    {
        printf("File is Opened\n");
        fscanf(file,"%s %s %d",&ch,&ch1,&age);
        printf("%s %s %d\n",ch,ch1,age);
        fclose(file);
    }
}
