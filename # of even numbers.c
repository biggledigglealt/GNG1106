//
// Created by Alexm on 10/2/2026.
//
/*Write a program that asks the user to enter 10 positive integers and prints the number of even numbers in them.
Arrays are not allowed to appear in your code.
Run the program using at least three test cases where the number of even numbers the user enters is respectively
0, 5, and 10.*/
#include <stdio.h>

int main()
    {
        int even_count=0; //Forgot to create an initial value
        int number;
        for (int i=0; i<10; i++)
        {
            printf("enter a number:\n");
            scanf("%d",&number);
            if (number%2==0)
            {
                even_count++;
            }
        }
        printf("You inputted %d even numbers.\n", even_count);

        return 0;
    }