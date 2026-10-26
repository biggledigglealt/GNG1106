//
// Created by Alexm on 10/20/2026.
//
#include <stdio.h>
int fibonacci(int K);
int main (void)
{
    int K;
    fibonacci(K);
    return 0;
}

int fibonacci (int K)
{
    printf("Please enter how many fibonacci numbers you would like:\n");
    int previous=1, current=1, next=0;
    do
    {
        scanf("%d",&K);
        if (K>2)
        {
            printf("Your fibonacci numbers are\n");
            printf("%d\t%d\t",previous,current);
            for (int i=2; i<K; i++)
            {
                next=previous+current;
                previous=current;
                current=next;
                printf("%d\t",next);
            }

        }
        else
        {
            printf("please enter a different value for K, K must be greater than 2\n");
        }
    }
    while (K<=2);
    return next;
}