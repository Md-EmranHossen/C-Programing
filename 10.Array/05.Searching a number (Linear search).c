#include<stdio.h>
int main()
{
    int num[100];
    int i,position,value,n;

    printf("How Many Numbers?");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }


    printf("Enter The Value You Want To Search:");
    scanf("%d",&value);


    position=-1;

    for(i=0; i<6; i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }
    }


    if(position==-1)
    {
        printf("Not found");
    }


    else
    {
        printf("The Position is:%d and the value is:%d",position,value);
    }

    getch();
}
