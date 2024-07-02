#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    printf("enter the row");
    printf("enter the col");
    scanf("%d%d",&n,&m);
    int A[n][m],B[n][m];
    printf("enter the array will be");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("the scalar quantity will be");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        B[i][j]=k*A[i][j];
        }
    }
    printf("the final array will be");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          printf(" %d\n",B[i][j]);
        }
    }
}