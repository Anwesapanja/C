//reverse the number
#include<stdio.h>
int main()
{
    int n,digits,a,b,c,d,e;
    printf("enter the nember");
    scanf("%d",&n);
    if (n<=32767)
    {
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        n=n/10;
        e=n;
        digits=(a*10000+b*1000+c*100+d*10+e*1);
        printf("the reverse nember will be\n%d",digits);
    }
return 0;    
}