//
// Created by Alexm on 10/15/2026.
//
#include <stdio.h>
int main(void)
{
    for (int i=0;i<=9;i++)
    {
        for (int k=1;k<=10;k++)
        {
            printf("\t %d",k+i*10);
        }
        printf("\n");
    }
}
