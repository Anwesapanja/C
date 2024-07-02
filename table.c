#include<stdio.h>
int main()
{
    int i,x,y;
    printf("Enter the value of x");
    scanf("%d",&x);
    i=1;
    while(i<=10)
    {
      printf("%d*%d=%d\n",x,i,x*i);
      i++;
    }
    return 0;
}      