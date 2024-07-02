#include<stdio.h>
int main()
{
    int i,j,n,m,TRS=0,TCS=0;
    printf("enter the row and col\n");
    scanf("%d%d",&n,&m);
    int A[n][m];
    printf("enter the array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("the values of sum of each row");
    for(i=0;i<n;i++)
    {
        int RS=0;
        for(j=0;j<m;j++)
        {
            RS=RS+A[i][j];
        }
             printf(" \n%d RS= %d",i,RS);  
            TRS=TRS+RS;
        
    }
    printf("\nthe sum of the total row %d",TRS);
    for(i=0;i<n;i++)
    {
        int CS=0;
        for(j=0;j<m;j++)
        {
            CS=CS+A[j][i];
        }
        printf(" \n%d CS=%d",j,CS);
        TCS=TCS+CS;
    }
    printf("\nthe sum of the total col %d",TCS);
    return 0;
}    
