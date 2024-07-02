#include<stdio.h>
int main()
{
    int a,r,h,w,b,d,e,f,g,k;
    float c;
    printf("enter a number");
    scanf("%d",&a);
    switch (a)
    {
        case 11:
        printf("enter the radius of the circle");
        scanf("%d",&r);
        c=3.14*r*r;
        printf("the area of the circle%f",c);
        break;
        case 22:
        printf("enter the height and width");
        scanf("%d%d",&h,&w);
        b=(h*w);
        printf("the area of the rectangle %d",b);
        break;
        case 33:
        printf("enter the length of the side");
        scanf("%d",d);
        e=(d*d);
        printf("the area of the square %d",e);
        break;
        case 44:
        printf("enter of the base and vertical height");
        scanf("%d%d",&f,&g);
        k=((f*g)/2);
        printf("the area of the triangle%d",k);
        break;
        default:
        printf("invalid");
    }
    return 0;
}

    

