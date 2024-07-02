#include<stdio.h>
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=4;j>=1;j--)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }  
    return 0;
}    