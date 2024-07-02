#include<stdio.h>
int main()
{
    float p,r,t;
    float SI;
    printf("enter the value of p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    SI=((p*r*t)/100);
    printf("the simple interest is=%f",SI);
    return 0;
}