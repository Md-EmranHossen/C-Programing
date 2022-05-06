/*
Why use global Structure and variable?
How use global Structure and variable?
What is global Structure and variable?
*/

#include<stdio.h>

  struct person            //Gocalal Structure    //(struct person) is a data type
{
    int age ;
    float salary;
};


struct person person1,person2; //GLOBAL variable


int main()
{

    struct person      //Localal Structure    //(struct person) is a data type
{
    int age ;
    float salary;
};

    person1.age =27;
    person1.salary=2750.56;

    printf("Person1\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %f\n\n",person1.salary);


    person2.age =21;
    person2.salary=3456.56;

    printf("Person2\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %f\n",person2.salary);


    getch();
}


