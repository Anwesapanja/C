#include<stdio.h>
 
int check(int p);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    check(n);
} 
int check(int n)
{
    if(n%2==0)
    {
        printf("the given number is even");
    }
    else
    printf("the given number is odd");
}