//
// Created by Alexm on 10/2/2026.
//
#include <stdio.h>

int main(void)
{
        int min;
        printf("enter an integer:\n");
        scanf("%d",&min);
        for (int i=0; i<9; i++)
        {
            int current_number;
            printf("enter another integer:\n");
            scanf("%d",&current_number);
            if (current_number<min)
            {
                min=current_number;
            }
        }
    printf("the smallest number is %d\n",min);
    return 0;
}