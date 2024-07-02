#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,d,e,x;
    printf("enter the coeff of x*x: ");
    scanf("%d",&a);
    printf("enter the coeff of x");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    d=((b*b)-(4*a*c));
    e=sqrt(d);
    x1=((-b+e)/(2*a));
    x2=((-b-e)/(2*a));
    printf("the first root will be :%4f\n",x1);
    printf("the 2nd root will be: %4f",x2);
    if(d>0)
    {
        printf("roots are real and unequal");
    }
    else if(d=0)
    {
        x=((-b)/2*a);
        printf("roots are real and equal %f",x);
    }
    else if(d<0)
    {
    printf("roots are imaginary");
    }
    return 0;
}    
