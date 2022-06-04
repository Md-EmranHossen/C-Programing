#include<stdio.h>
int main()
{
    int A[3][3]= {{5,6,7},{3,4,5},{5,8,5}};
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("  %d",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
