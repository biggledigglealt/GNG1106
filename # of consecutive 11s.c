//
// Created by Alexm on 10/2/2026.
//
/*Loop Programming: Find the Number of "11"s
Write a program that asks the user to enter a sequence of 10 integers,
each either being 1 or 0, and then prints the number of times the user has entered a "1" immediately after another "1".
Arrays are not allowed to appear in your code. Run the program using at least the following five test cases:

Test case 1: all entered numbers are 0
Test case 2: all entered numbers are 1
Test case 3: the entered sequence is: 1, 1, 1, 0, 0, 1, 1, 1, 1, 0
Test case 4: the entered sequence is: 0, 0, 0, 1, 0, 1, 0, 1, 0, 1
Test case 5: the entered sequence is: 1, 1, 1, 0, 1, 1, 1, 0, 1, 1
Submit the code and the screenshot of its execution for the test cases*/
#include <stdio.h>
int main(void)
{
    int count_1=0;
    int binary;
    int previous_binary=0;
    for (int i=0; i<10; i++)
    {
        printf("Enter an integer either 1 or 0\n");
        scanf("%d", &binary);
        if (binary==1)
        {
            if (previous_binary==binary)
            {
            count_1++;
            }
        }
        previous_binary=binary;
    }
    printf("You have %d consecutive ones in your input\n", count_1);
    return 0;
}
