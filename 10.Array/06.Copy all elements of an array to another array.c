#include<stdio.h>
int main()
{
    int array1[20],array2[20];
    int n,i;

    printf("How Many Number?");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }


    printf("Array1:");
    for(i=0; i<n; i++)
    {
        printf("%d",array1[i]);
    }

    printf("\n");


    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }


    printf("Array2:");
    for(i=0; i<n; i++)
    {
        printf("%d",array2[i]);
    }

    getch();

}
