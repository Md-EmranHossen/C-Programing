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


    if(person1.age==person2.age && person1.salary==person2.salary)   //Comparison
        printf("person1 equal to person 2");

    else
        printf("person1 not equal to person 2");


    getch ();

}
