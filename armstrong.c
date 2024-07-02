#include<stdio.h>
int main()
{
    int n,k,sum=0,r;
    printf("enter a three digit integer");
    scanf("%d",&n);
    k=n;
    while (k!=0)
    {
        r=k%10;
        sum=sum+r*r*r;
        k=k/10;
    }
    if (sum==n)
    printf("%dis an armstrong number",n);
    else
    printf("%dis not an armstrong number",n);
    return 0;
}