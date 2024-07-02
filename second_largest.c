#include<stdio.h>
int main()
{
    int A[5],i,max,smax;
    printf("the array will be: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    smax=A[0];
    for(i=0;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    printf("\n\nthe max value: %d",max);
    for(i=0;i<5;i++)
    {
        if(A[i]>smax && A[i]!=max)
        {
            smax=A[i];
        }
    }
    printf("\nsecond largest will be: %d\n",smax);
    return 0;
}    

    

