//
// Created by Alexm on 10/25/2026.
//
#include <stdio.h>
int main(void)
{
    int previous,current,count=0;
    printf("Enter an integer:\n");
    scanf("%d",&current);
    for (int i=0;i<999;i++)//take 1 away from 1000 because we already entered one of the 1000
    {
        previous=current;
        printf("Enter another integer\n");
        scanf("%d",&current);
        if (current>previous)
        {
            count++;
        }
    }
    printf("You inputted %d numbers greater than the previous\n", count);
    return 0;

}