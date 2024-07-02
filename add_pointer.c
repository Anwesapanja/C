#include<stdio.h>
int main()
{
    int A[2][2],B[2][2],sum[2][2],i,j;
    printf("the first array will be: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&A[i][j]);
        }
    }
    printf("the 2nd array will be: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        (*(*(sum+i)+j))=(*(*(A+i)+j))+(*(*(B+i)+j));
        }
    }
    printf("the sum will be: ");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
            printf("%d\t", (*(*(sum+i)+j)));
            }
        }
    printf("\n");
    return 0;
}    

    

