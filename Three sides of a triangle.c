//
// Created by Alexm on 9/27/2026.
//
#include <stdio.h>
int main(void)
{
    float s1,s2,s3;
    printf("please enter all sides of your triangle\n");
    scanf("%f%f%f",&s1,&s2,&s3);
    //no negative sides
    if (s1>0 && s2>0 && s3>0)
    {
        //triangle inequality theorem
        if (s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
        {
            printf("These dimensions can create a triangle");
        }

        else
        {
            printf("These dimensions cannot create a triangle");
        }
    }
    else
    {
        printf("wrong input");
    }
    return 0;

}