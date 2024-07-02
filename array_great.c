#include<stdio.h>
int main()
{
    int A[10],great=0,small=0,i;
      printf("enter the value of array");
    for(i=0;i<10;i++)
    {
      
        scanf("%d",&A[i]);
    }
    great=A[0];
    small=A[0];
    for(i=0;i<10;i++)
    {
        if(A[i]>great)
        {
            great=A[i];
        }
        if(A[i]<small)
        {
            small=A[i];
        }
    }
        printf("the greatest value is %d",great);
        printf("the smallest value is %d",small);
    return 0;
}