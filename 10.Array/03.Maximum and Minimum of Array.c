#include<stdio.h>
int main()
{
    int n,num[100],i;

    printf("How Many Numbers?");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int min = num[0];

    for(i=1; i<n; i++)
    {
        if(num[i]<min)
            min=num[i];
    }

    printf("Minimum is:%d",min);

    getch();
}
