//
// Created by Alexm on 10/15/2026.
//
#include <stdio.h>
#define PI 3.141592653589
int main()
{
    int again;
    do
    {
        double radian, degree, term=1,result=1;
        printf("What angle would you like to compute:\n");
        scanf("%lf",&degree);
        radian=degree*PI/180;
        for (int i=1; i<=1000; i++)
        {
            term=term*(-1*1)*radian*radian/((2*i-1)*(2*i));
            result=result+term;
        }
        printf("The value of cosine at %f is %f\n",degree,result);
        ;
        printf("if you would like to continue do not input 1\n");
        scanf("%d",&again);
    }

    while (again!=1);
   return 0;
}