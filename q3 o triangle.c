//
// Created by Alexm on 10/14/2026.
//
#include <stdio.h>
int main(void)
{
    int N;
    printf("How many layers do you want your O triangle to have?\n");
    scanf("%d", &N);
    for (int i=N; i>0; i--)
    {
        int e=i;
        for (int j=e; j>0; j--)
        {
            printf("o");
        }
        printf("\n");
    }

    return 0;
}