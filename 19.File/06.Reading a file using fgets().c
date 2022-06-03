#include<stdio.h>
int main()
{
    FILE *file;
    char ch[60];
    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File doesn't Exist");

    }

    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
           fgets(ch,30,file);
        printf("%s",ch);
        }

        fclose(file);
    }

}
