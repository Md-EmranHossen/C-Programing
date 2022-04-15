// Use Scanf function;
//Write a program that reads n numbers and display their sum and avarage;

#include<stdio.h>
int main()
{

    int num[5];
    int sum=0,i,n;
    printf("How many numbers:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);    //Use scanf;
    }


    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
    }


    printf("The sum is:%d\n",sum);

    printf("The Avaraage is:%.2f",(float)sum/n);  //Type Casting

    return 0;

}
