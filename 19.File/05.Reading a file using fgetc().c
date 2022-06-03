#include<stdio.h>
int main()
{
    FILE *file;
    file= fopen("test.txt","r");
    char ch;



    if(file==NULL)
    {
        printf("The File does't Exist ");
    }


    else
    {
        printf("File is Opened\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }

    getch();

}
