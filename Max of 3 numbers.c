//
// Created by Alexm on 9/27/2026.
//
#include <stdio.h>

int main(void)
{
    //user inputs
    int x1,x2,x3;
    printf("Please enter three integers, no repeating:\n");
    scanf("%d%d%d",&x1,&x2,&x3);
    if (x1!=x2 && x1!=x3 && x2!=x3)
    {
        if (x1>x2 && x1>x3)
        {
            printf("%d is the biggest is the biggest number of the three",x1);
        }
        else if (x2>x1 && x2>x3)
        {
            printf("%d is the biggest number of the three",x2);
        }
        else if (x3>x1 && x3>x2)
        {
            printf("%d is the biggest number of the three", x3);
        }
    }
        else
        {
            printf("wrong input");
        }
    return 0;
}