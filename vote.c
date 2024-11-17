//11.	Write a program that checks if a person is eligible to vote based on their age. A person must be at least 18 years old to vote.
#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    if (scanf("%d",&age)!=1)
    {
        printf("please enter the valid age.");
        return 1;
    }
    if (age>=18)
    {
        printf("Eligible for VOTE.");
    }
    else if (age>=0 && age <18)
    {
        printf("Not Eligible for VOTE.");
    }
    else
    {
        printf("please enter correct age.");
    }
    return 0;
}