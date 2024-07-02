#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    printf("enter the two numbers");
    scanf("%d %d",&x,&y);
    p=&x;
    q=&y;
    if(*p>*q)
    {
        printf("the bigger number will be %d",*p);
    }
    else
    {
        printf("the bigger number will be %d",*q);
    }
    return 0;
}    