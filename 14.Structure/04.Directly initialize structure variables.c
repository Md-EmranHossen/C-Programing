#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1= {24,24000.50};    //Directly initilize
    struct person person2,person3;
    person2.age=23;
    person2.salary=30678.76;

    person3=person2;



    printf("person1\n");
    printf("Age is:%d\n",person1.age);
    printf("Salary is:%.2f\n\n",person1.salary);


    printf("person2\n");
    printf("Age is:%d\n",person2.age);
    printf("Salary is:%.2f\n\n",person2.salary);


    printf("person3\n");
    printf("Age is:%d\n",person3.age);
    printf("Salary is:%.2f\n",person3.salary);

    getch ();



}
