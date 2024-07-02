#include<stdio.h>
int main()
{
    int x;
    x=98;
    printf("before any shifting value is %d\n",x);
    x=98>>2;
    printf("after left shifting value is %d\n",x);
    x=98<<2;
    printf("after right shifting value is %d",x);
    return 0;
}