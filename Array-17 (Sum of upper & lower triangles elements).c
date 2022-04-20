#include<stdio.h>
int main()
{
    int i,j,A[10][10],n,m,uppersum=0,lowersum=0;


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


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i<j)
            {

                uppersum=uppersum+A[i][j];
            }
            if(i<j)
            {

                lowersum=lowersum+A[i][j];
            }

        }
    }


    printf("\n \n");
    printf("Sum of Upper Triangle Elements :%d\n",uppersum);
    printf("Sum of lower Triangle Elements :%d\n",lowersum);

    getch ();
}
