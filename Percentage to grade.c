//
// Created by Alexm on 9/27/2026.
//
#include <stdio.h>

int main(void) {
    int grade;
    printf("Please input your grade:\n");
    scanf("%d",&grade);
    if (grade>=90)
    {
        printf("Your is an A+");
    }
    else if (grade>=85)
    {
        printf("Your grade is an A");
    }
    else if (grade>=80)
    {
        printf("Your grade is an A-");
    }
    else if (grade>=75)
    {
        printf("Your grade is a B+");
    }
    else if (grade>=70)
    {
        printf("Your grade is a B");
    }
    else if (grade>=65)
    {
        printf("Your grade is a C+");
    }
    else if (grade>=60)
    {
        printf("Your grade is a C");
    }
    else if (grade>=55)
    {
        printf("Your grade is a D+");
    }
    else if (grade>=50)
    {
        printf("Your grade is a D");
    }
    else if (grade>=40)
    {
        printf("Your grade is a E");
    }
    else if (grade>=0)
    {
        printf("Your grade is a F");
    }
    else
    {
        printf("Invalid grade");
    }
    return 0;
}