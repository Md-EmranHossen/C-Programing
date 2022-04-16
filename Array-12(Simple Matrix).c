//simple Matrix;

#include<stdio.h>
int main()
{
    int A[3][4],B[3][4];
    int i,j;

    printf("Enter Element of A Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }



    printf("A=");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t %d",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("Enter Element of B Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }




    printf("B=");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\t%d",B[i][j]);
        }
        printf("\n");
    }


    return 0;

}

