#include<stdio.h>
int main()
{
  int a=10;
  if(a==a--)
  {
    printf("True 1\t %d",a);
  } 
    a=10;
    if(a==--a)
    {
        printf("True 2\t %d",a);
    }
   return 0;
}    

  