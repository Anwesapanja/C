#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter the value: ");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?((a>c)? a:c):((b>a)? b:c);
    printf("the max value will be %d",max);
    return 0;
}    
