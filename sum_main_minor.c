#include<stdio.h>
int main()
{
    int i,j,n,m,main=0,minor=0,sum;
    printf("enter the number of row and col");
    scanf("%d%d",&n,&m);
    int A[n][m];
    printf("enter the array will be");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                main=main+A[i][j];
            }
        }
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i+j==n-1)
           {
              minor=minor+A[i][j];
           }
        }
    }
    sum= main+minor;
    printf("the sum of main%d",main);
    printf(" \nthe sum of minor%d",minor);
    printf("\n  the sum of main and minor%d\n",sum);
    return 0;    
}