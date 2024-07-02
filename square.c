#include<stdio.h>
int square(int x);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    square(n);
}
int square(int n)
{
    int y;
    y=(n*n);
    printf("the result is %d",y);
    return 0;
}