#include<stdio.h>

struct person
{
    char name[15];
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;


    for(i=0; i<4; i++)
    {
        printf("Enter Information for Person%d\n",i+1);
        printf("Enter Name:\n");
        fflush(stdin);
        scanf("%[^\n]",&person[i].name);
        printf("Enter Age:\n");
        scanf("%d",&person[i].age);
        printf("Enter Salary:\n");
        scanf("%f",&person[i].salary);
    }


    for(i=0; i<4; i++)
    {
        printf("\n\nInformation for Person%d\n",i+1);
        printf("Name:%s\n",person[i].name);
        printf("Age:%d\n",person[i].age);
        printf("Salary:%f\n",person[i].salary);
    }

    getch ();
}
