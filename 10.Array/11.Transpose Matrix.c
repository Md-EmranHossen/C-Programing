
#include<stdio.h>
int main()
{
    int i,j,m,n,A[20][20],B[20][20],transpose[20][20];

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



    for(i=0; i<m; i++)
    {

        for(j=0; j<n; j++)
        {
            transpose[j][i]=A[i][j];
        }

    }


    printf("\nTranspose=\n");
    for(i=0; i<n; i++)
    {
        printf("\t\t");
        for(j=0; j<m; j++)
        {
            printf(" %d",transpose[i][j]);
        }
        printf("\n");
    }

    getch();

}
