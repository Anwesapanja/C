#include<stdio.h>
int Max(int x,int y);
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    Max(a,b);
}
int Max(int a,int b)
{
   if(a>b)
   {
    printf("a is greater than b");
   }
   else
   printf("b is greater than a");
   return 0;
}