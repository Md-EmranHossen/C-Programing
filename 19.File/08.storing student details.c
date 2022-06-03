#include<stdio.h>
int main()
{
    FILE *file;
    char ch[34];
    int age,n,i;
    int number;

    printf("Enter the number of the student:");
    scanf("%d",&n);

    file= fopen("student.txt","a");
    if(file==NULL)
    {
        printf("File does not Exist");
    }

    else
    {

        for(i=0; i<n; i++)
        {
            printf("Enter Name:");
            scanf("%s",&ch);

            printf("Enter Age:");
            scanf("%d",&age);

            printf("Enter Number:");
            scanf("%d",&number);

            fprintf(file,"\n%s\t\%d\t\t%d",ch,age,number);

        }
        fclose(file);
    }
    getch();
}
