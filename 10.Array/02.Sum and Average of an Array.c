#include<stdio.h>
int main()
{
    int num[50];
    int i,sum=0,n;

    printf("How many Number:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }


    for(i=0; i<n; i++)
    {
        sum=sum+num[i];
    }

    printf("The sum is:%d\n",sum);

    printf("The AVG is:%f\n",(float)sum/n);

    getch();

}
