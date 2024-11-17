// 9.Write a program that checks if a given year is a leap year or not using if-else statements. (A year is a leap year if it is divisible by 4, but not by 100, except if it is also divisible by 400.)
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year:");
    if (scanf("%d", &year) != 1)
    {
        printf("invaild year please enter the vaild input");
        return 1;
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}