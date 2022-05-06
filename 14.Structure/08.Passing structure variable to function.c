#include<stdio.h>

struct person
{
    char name[15];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Name :%s\n",p.name);
    printf("Age :%d\n",p.age);
    printf("Salary :%.2f\n\n",p.salary);
}

int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Emran Hossen");
    person1.age=23;
    person1.salary=3345.54;
    display(person1);



    strcpy(person2.name,"Syma Sultana");
    person2.age=15;
    person2.salary=3344445.54;
    display(person2);

    getch ();
}
