#include<stdio.h>
int main()
{
    int i,j,A[3][3],B[3][3],C[3][3];
    printf("Enter the first array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the second array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("the final value\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }  
    return 0;
}          





