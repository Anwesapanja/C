#include<stdio.h>
//int a[10],b[10],c[10];
void take_array(int a[]);
void print_array(int b[]);
void sum_array(int a[],int b[],int c[] );
void main()
{
    int x[10],y[10],z[10];
    printf("enter value of first array\n");
    take_array(x);
    printf("enter the value of the second array\n");
    take_array(y);
    printf("\n finding the sum\n");
    sum_array(x,y,z);
    printf("\n Printing 1st array ");
    print_array(x);
    printf("\n printing 2nd array");
    print_array(y);
    printf("\n print the sum\n");
    print_array(z);
}

void take_array(int a[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}

void print_array(int b[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n%d",b[i]);
    }
}

void sum_array(int a[10],int b[10] ,int c[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        c[i]=a[i]+b[i];
    }
  
}




