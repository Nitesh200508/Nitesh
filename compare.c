//12.	Create a program that compares the grades of two students and prints which student scored higher or if they scored the same.
#include <stdio.h>

int main(){
    float a,b;
    printf("Enter the grade of A:");
    scanf("%f",&a);
    printf("Enter the grade of B:");
    scanf("%f",&b);
    if (a>b)
    {
        printf("a scored higher grade.");
    }
    else if (b>a)
    {
        printf("b scored higher grade.");
    }
    else{
        printf("both student scored same grade.");
    }
    return 0;
}