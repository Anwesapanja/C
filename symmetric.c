#include<stdio.h>
int main()
{
    int A[2][3],B[3][2],i,j,count;
    printf("enter the elements of the matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            B[j][i]=A[i][j];
        }
    }
         for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(A[i][j]!=B[i][j])
            {
              count=1;
              break;
            }  
        }
    }
    if(count==1)
    {
        printf("the matrix is symmetric ");
    }
    else 
    {
        printf(" not symmetric");
    }
    return 0;
}    




