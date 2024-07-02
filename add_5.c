#include<stdio.h>
int main()
{
    int A[10],sum[10],i;
    printf("enter the value of the array");
    for(i=0;i<10;i++)
    {
           scanf("%d",&A[i]);
    }
   for(i=0;i<10;i++)
   {
   sum[i]=A[i]+5;
   }
   for(i=0;i<10;i++)
   {
    printf("the result is %d\n",sum[i]);
   }
   return 0;
}   

      