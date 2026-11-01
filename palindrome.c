//
// Created by Alexm on 10/31/2026.
//
#include <stdio.h>
int main(void)
{
    int a[5],num;
    printf("Enter your 5 digit number separately\n");
    scanf("%d",&num);
    a[0]=num/10000;
    a[1]=(num/1000)%10;
    a[2]=(num/100)%10;
    a[3]=(num/10)%10;
    a[4]=num%10;
    if (a[0]==a[4] && a[1]==a[3])
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("this number is not a palindrome\n");
    }
    return 0;
}