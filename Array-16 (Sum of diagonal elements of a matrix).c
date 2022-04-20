#include<stdio.h>
int main()
{
    int i,j,A[10][10],n,m,sum=0;
    printf("Enter Row & Colum Number:");
    scanf("%d %d",&n,&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }



    printf("A=");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }



    printf("Diagonal Elements Are:");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==j)
            {
                printf("% d",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }


    printf("\n \n");


    printf("Sum of diagonal Elements :%d",sum);

    getch ();


}
