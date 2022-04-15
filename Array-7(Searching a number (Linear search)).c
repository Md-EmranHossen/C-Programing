#include<stdio.h>
int main()
{
    int num[5]= {30,50,60,34};
    int i,value;
    printf("Enter a value:");
    scanf("%d",&value);


    int  pos=-1;

    for(i=0; i<5; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
        }
    }

    if(pos==-1)
    {
        printf("Not Found");
    }
    else
        printf("The number is %d and position is:%d",value,pos);

    return 0;


}
