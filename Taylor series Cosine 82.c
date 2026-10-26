//
// Created by Alexm on 10/14/2026.
//
#include <stdio.h>
#define PI 3.14159265358979
double factorial (double num)
{
    double result=1;

    for (double i=num; i>0;i--)
    {
        result=result*i;
    }
    return result;
}
double power(double exponent, double base)
{
    double product=1;
    for (double i=1;i<=exponent;i++)
    {
        product=product*base;
    }
    return product;
}
int main(void)

{
    double degree;
    printf("What angle is your triangle in degrees?\n");
    scanf("%lf", &degree);
    double radian=degree*2*PI/360;
    double result=1;
    for (int k=1;k<1000;k++)
    {
        double current=power(k,-1)*power(2*k,radian)/factorial(2*k);
        result=result+current;
    }
    printf("The value of cosine at %f degrees is %f\n", degree, result);
    return 0;
}
