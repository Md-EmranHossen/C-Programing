#include<stdio.h>
struct person
{
    int age ;
    float salary;
};
struct person person1,person2;

int main()
{

    printf("Person1 Age and Salary:\n");
    scanf("%d",&person1.age);
    scanf("%f",&person1.salary);

    printf("Person2 Age And Salary:\n");
    scanf("%d",&person2.age);
    scanf("%f",&person2.salary);


    printf("Person1\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n\n",person1.salary);

    printf("Person2\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);


    getch();
}
