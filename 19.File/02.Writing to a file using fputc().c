#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]="Emran Hossen";
    file =fopen("test.txt","w");
    int length=strlen(name);
    int i;

    if(file==NULL)
        printf("File does not Exist");

    else
    {
        printf("File is Opened");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("\nFile is Written Succsfully");
        fclose(file);
    }

    getch();
}
