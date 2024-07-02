#include<stdio.h>
#include<stdlib.h>
void perfect(int n);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
void perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
       if( n%i==0)
        sum=sum+i;
       // printf("\nsum=%d",sum);
        //printf("\ni=%d",i);
    }
        if(sum==n)
        {
         printf("%d is a perfect number",n);
         //printf("\n%d",i);
        exit(0);
        }
    

    printf("%d is not a perfect number",n);
}
