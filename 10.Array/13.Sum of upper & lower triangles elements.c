#include<stdio.h>
int main()
{
    int i,j,m,n,A[20][20],sum1=0,sum2=0;

    printf("Enter Row and Collamn number:");
    scanf("%d %d",&m,&n);


    while(m!=n)
    {
        printf("Row and Collamn Are not Same\n");
        printf("Again Row and Collamn number:");
        scanf("%d %d",&m,&n);
    }


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j)
            {
                sum1=sum1+A[i][j];
            }

            if(i>j)
            {
                sum2=sum2+A[i][j];
            }
        }

    }


    printf("\nA=");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of upper triangel Elements is:%d",sum1);
    printf("\nSum of lower triangel Elements is:%d",sum2);
    getch();

}
