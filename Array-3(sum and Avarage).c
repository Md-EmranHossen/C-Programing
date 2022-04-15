// Sum and Avarage;
#include<stdio.h>
int main()
{

    int num[4]= {1,3,4,5};
    int sum=0,i;
    for(i=0; i<4; i++)
    {
        sum=sum+num[i];
    }
    printf("The sum is:%d\n",sum);

    printf("The Avaraage is:%.2f",(float)sum/4);  //Type Casting

    return 0;

}
