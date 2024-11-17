#include <stdio.h>

int main()
{
    int temp;
    printf("enter the temperature:");
    scanf("%d", &temp);
    if (temp <= 16)
    {
        printf("the entered temperature is cold.");
    }
    else if (temp > 16 && temp <= 27)
    {
        printf("the entered temperature is warm.");
    }
    else
    {
        printf("the entered temperature is hot.");
    }
    return 0;
}