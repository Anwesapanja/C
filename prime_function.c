#include<stdio.h>
#include<stdlib.h>

int prime(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            printf("Not prime");
            exit(0);
        }
    }
    printf("%d is a prime number",n);
    return 0;
}