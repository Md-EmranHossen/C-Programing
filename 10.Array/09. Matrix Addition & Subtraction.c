#include<stdio.h>
int main()
{
    int i,j,m,n,A[20][20],B[20][20],C[20][20];

    printf("Enter Row and Collam number:");
    scanf("%d %d",&m,&n);

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
            printf("B[%d][%d]:",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
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


    printf("\nB=");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }



    for(i=0; i<m; i++)
    {

        for(j=0; j<n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }



    printf("\nA+B = ");
    for(i=0; i<m; i++)
    {
        printf("\t");
        for(j=0; j<n; j++)
        {
            printf(" %d",C[i][j]);
        }
        printf("\n");
    }

    getch();

}
