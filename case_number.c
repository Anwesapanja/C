#include<stdio.h>
int main()
{
    int y=0,x,n;
    printf("Enter the values of n and x");
    scanf("%d%d",&n,&x);
    switch(n)
    {
        case 1:
        y=(1+(x*x));   
        break;
        case 2:
        y=(1+(x/n));
        break;
        case 3:
        y=(1+(2*x));
        break;
        default:
        y=(1+(n*x));
    }
    printf("the value of y  %d",y);
    return 0;
}        
    
      



    
