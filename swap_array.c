#include<stdio.h>
int main()
{
    int i,n, A[100],B[100],c;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter value for first arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",& A[i]); 
    }       
    printf("enter value for 2nd arry"); 
    for(i=0;i<n;i++)
    {
         scanf("%d",& B[i]);     
    }
    for(i=0;i<n;i++)
    {
     c=A[i];
     A[i]=B[i];
     B[i]=c;
    }
    printf("\n first arry");
    for(i=0;i<n;i++)
    {
        printf("%d\n\n",A[i]);
    }
    printf("\n 2nd arry");
    for(i=0;i<n;i++)
    {
        printf("\n\n %d",B[i]);
    }
    return 0;
} 
        
    




