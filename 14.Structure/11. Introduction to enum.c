//An enumeration is a user defined data type that consist of integral constant.
#include<stdio.h>

enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;

    day1=sun;
    int diff=sat-sun;

    printf("Day1=%d\n",day1);
    printf("Day Difference=%d\n",diff);

    getch();

}
