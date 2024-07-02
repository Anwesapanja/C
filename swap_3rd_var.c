#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two variables: ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the swapping variable will be:%d %d",a,b);
    return 0;
}