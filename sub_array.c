#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the row");
    printf("enter the col");
    scanf("%d",&n);
    scanf("%d",&m);
    int A[n][m],B[n][m],sub[n][m];
    printf("enter the first array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[n][m]);
        }
    }
    printf("enter the 2nd array");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           scanf("%d",&B[n][m]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sub[n][m]=A[n][m]-B[n][m];
        }
    }
    printf("the final array will be");
      for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf ("\n%d",sub[n][m]);
        }
    }
    return 0;
}    






    

