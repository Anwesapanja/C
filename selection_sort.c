#include<stdio.h>
int main()
{
    int n,temp,i,j=i+2;
    printf("enter the size of the array");
    scanf("%d",&n);
    int A[n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("the final array using bubble sort");
    for(j=0;j<n;j++)
    {
        printf("%d\n",A[j]);
    }
    return 0;
}