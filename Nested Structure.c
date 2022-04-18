#include<stdio.h>
struct  salary
{

    float basic;
    int house;
    float  medical;
    float convence;

};

struct Teacher
{
    char name[30];
    int id;
    char Cellno[11];
    struct salary d;

};


int main()
{

    struct Teacher a;

    printf("Teacher Name:\n");
    scanf("%[^\n]",&a.name);

    printf("ID Number:\n");
    scanf("%d",&a.id);


    printf("Cell Number:\n");
    scanf("%s",&a.Cellno);


    printf("Basic:\n");
    scanf("%f",&a.d.basic);


    printf("House:\n");
    scanf("%d",&a.d.house);


    printf("Medical:\n");
    scanf("%f",&a.d.medical);


    printf("\n \n");

    printf("Name:%s\n",a.name);
    printf("ID Number:%d\n",a.id);
    printf("Cell number:%s\n",a.Cellno);
    printf("Basic Cost:%.2f\n",a.d.basic);
    printf("House Number:%d\n",a.d.house);
    printf("Medical Cost:%.2f\n",a.d.medical);


    getch ();


}
