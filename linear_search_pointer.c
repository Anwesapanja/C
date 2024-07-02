#include<stdio.h>
int main()
{
    int n,A[10],key,i,*p, found;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("the elements of the array will be : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    p=A;
    printf("enter the key value");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==*p)
       {
          found=1;
          break;
       }
       p++;
    }   
    if(found==1)
    {
    printf("%d Found %d position",key,i+1);
    }
    else
    {
        printf("%d not found",key);
    }
    return 0;
}    

    
    