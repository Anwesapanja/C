#include<stdio.h>
void fibbo(int n);
int main()
{
    int n;
    printf("enter the value of the n");
    scanf("%d",&n);
    printf("the result of the series is\n");
    fibbo(n);
    return 0;
}
void fibbo(int n)
{
    int a=-1,b=1,c,i;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf(" %d",c);
    }
}    
