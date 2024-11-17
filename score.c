// 8.Create a program that accepts a student's score and classifies it as "Excellent" (90-100), "Good" (75-89), "Average" (50-74), or "Fail" (0-49) using if-else statements.
#include <stdio.h>

int main()
{
    int score;
    printf("Enter the score:");
    scanf("%d", &score);
    if ((score >= 0 && score <= 100) != 1)
    {
        printf("invaild input please enter the vaild digit(0-100)");
        return 1;
    }
    if (score >= 90 && score <= 100)
    {
        printf("Excellent");
    }
    else if (score >= 75 && score <= 89)
    {
        printf("Good");
    }
    else if (score >= 50 && score <= 74)
    {
        printf("Average");
    }
    else if (score >= 0 && score <= 49)
    {
        printf("fail");
    }
    return 0;
}