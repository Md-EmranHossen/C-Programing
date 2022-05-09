#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Student.txt","w");

    char a[20];
    int id,intake,section;
    gets(a);
    scanf("%d %d %d",&id,&intake,&section);
    fprintf(ptr,"Name:%s\n",a);
    fprintf(ptr,"ID:%d\n Intake:%d\n Section:%d\n", id,intake,section);
    fclose(ptr);
    return 0;
}
