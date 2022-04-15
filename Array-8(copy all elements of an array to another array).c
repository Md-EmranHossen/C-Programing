#include<stdio.h>
int main()
{
    int i,array1[40],array2[40],n;


    printf("How many number:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }


    printf("Array1:");
    for(i=0; i<n; i++)
    {
        printf("  %d",array1[i]);
    }


    for(i=0; i<n; i++)
    {
        array2[i]=array1[i];   //Copy
    }


    printf("\nArray2:");
    for(i=0; i<n; i++)
    {
        printf("  %d",array2[i]);
    }


    getch ();

}
