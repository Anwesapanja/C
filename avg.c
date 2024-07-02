#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    avg=((a+b+c)/3.0);
    printf("the value of avg %f",avg);
    return 0;
}