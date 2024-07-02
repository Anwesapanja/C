#include<stdio.h>
int fact(int p);
void main()
{
    int n,r,ncr=0,c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of r");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("the result will be %d c %d= %d",n,r,ncr);
}
int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++)
    {
    sum=sum*i;
    }
    return (sum);
}    
