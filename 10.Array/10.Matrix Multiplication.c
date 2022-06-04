#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,sum=0,A[20][20],B[20][0],C[20][20];

    printf("Enter Row and Collum of The First Matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter Row and Collum of The Second Matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Wrong Enter Again:\n");

        printf("Row and Collum of The First Matrix:");
        scanf("%d %d",&r1,&c1);

        printf("Row and Collum of The Second Matrix:");
        scanf("%d %d",&r2,&c2);
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]:",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    printf("\nA=");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }


    printf("\nB=");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }

            C[i][j] = sum;
        }

    }


    printf("\nA*B=");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }

    getch();

}
