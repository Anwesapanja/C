#include<stdio.h>
int swap(int x,int y);
void main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d %d",&a, &b);
    swap(a,b);
    
}
int swap(int a,int b)

{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value will be: %d %d",a,b);
    return 0;
}