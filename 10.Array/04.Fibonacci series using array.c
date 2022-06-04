#include<stdio.h>
int main()
{
    int a[100],i,n;

    printf("How many Numnbers?");
    scanf("%d",&n);


    a[0]=0;
    a[1]=1;


    for(i=2; i<n; i++)
    {
        a[i]=a[i-1] + a[i-2];
    }

    printf("\nThe Fibonacci number are:");
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }

    getch();
}
