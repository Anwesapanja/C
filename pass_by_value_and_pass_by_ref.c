#include<stdio.h>
void swap(int x,int y);
void swap1(int *p,int *q);
int main()
{
    int a,b;
   // a=20;
    //b=50;
    printf("the value of a and b");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("after swap a=%d b=%d",a,b);
    swap1(&a,&b);
    printf("\n\nafter swap a=%d b=%d",a,b);
    return 0;
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void swap1(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}