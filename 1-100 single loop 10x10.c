//
// Created by Alexm on 10/15/2026.
//
#include <stdio.h>
int main(void)
{
    for (int i=1;i<=100;i++)
    {
        printf("\t%d",i);
        if (i%10==0)
        {
            printf("\n");
        }
    }
}