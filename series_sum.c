#include<stdio.h>
int main()
{
    int n,i;
    float sum;
    printf("enter the value of n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+((float) 1/(float) i);
    }
    printf("the result is %f",sum);
    return 0;
}

