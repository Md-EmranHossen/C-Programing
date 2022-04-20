#include<stdio.h>
int main()
{
    int r,c,a[10][10],transpose[10][10],i,j;

    printf("Row and Collum number:");
    scanf("%d %d",&r,&c);


    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    printf("A Matrix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf(" %d",a[i][j]);

        }
        printf("\n");
    }



    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            transpose[j][i] =a[i][j];

        }
        printf("\n");
    }

    printf("\n");



    printf("Transpose\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf(" %d",transpose[i][j]);

        }
        printf("\n");
    }

    getch ();

}
