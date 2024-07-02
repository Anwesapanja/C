#include<stdio.h>
int main()
{
    int n,m,A[15][15],i,j;
    printf("enter the value of the row");
    scanf("%d",&n);
    printf("enter the value of the col");
    scanf("%d",&m);
    printf("enter the value of the array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("the diagonal elements will be: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j||i+j==n-1)
            {
                printf("%d\t",A[i][j]);
            }
        }
    }
    return 0;
    
}