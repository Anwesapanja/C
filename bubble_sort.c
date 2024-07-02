#include<stdio.h>
int main()
{
    int size,i,A[10],j;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("the array will be: ");
    for(i=0;i<size;i++)
    {
       scanf("%d",&A[i]);
    }
     i=0;
    int n=size;
    while(i<n)
    {
        if(i+1==n)
        {
        i=0;
        n--;
        }
    
    if(A[i]>A[i+1])
    {
    int temp=A[i];
    A[i]=A[i+1];
    A[i+1]=temp;   
    }
    i++; 
    }
    printf("the sorted araay will be:");
    for(j=0;j<size;j++)
    {
        printf("\n\n%d\n",A[j]);
    }
    return 0;
}