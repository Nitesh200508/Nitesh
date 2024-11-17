#include <stdio.h>

int main()
{
    float weight, height, bmi;
    printf("enter weight in kg:");
    scanf("%f", &weight);
    printf("enter height in m:");
    scanf("%f", &height);
    bmi = weight / (height * height);
    if (bmi <= 18.5)
    {
        printf("the person is underweight");
    }
    else if (bmi > 18.5 && bmi < 24.9)
    {
        printf("the person is healthy weight.");
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        printf("the person is overweight.");
    }
    else if (bmi > 30)
    {
        printf("the person is obese");
    }
    else
    {
        printf("the enter no. is invalid.");
    }
    return 0;
}