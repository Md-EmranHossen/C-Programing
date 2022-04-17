#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,A[10][10],B[10][10],result[10][10],sum=0,k;
    printf("Row and colum For first Matrix:\n");
    scanf("%d %d",&r1,&c1);

    printf("Row and colum For Second Matrix:\n");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Wrong!!");
        printf("Row and colum For first Matrix:\n");
        scanf("%d %d",&r1,&c1);

        printf("Row and colum For Second Matrix:\n");
        scanf("%d %d",&r2,&c2);
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");


    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }



    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k] * B[k][j];
            }
            result[i][j]=sum;
            sum=0;

        }
    }



    printf("A=");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t% d",A[i][j]);

        }
        printf("\n");
    }

    printf("\n");




    printf("B=");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\t% d",B[i][j]);

        }
        printf("\n");
    }

    printf("\n \n");



    printf("Result=");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\t% d",result[i][j]);

        }
        printf("\n");

        return 0;
    }


}
