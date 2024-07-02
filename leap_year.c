#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if (year%100==0)
    {
      if(year%400==0)
      printf("the year is leapyear");
      else
      printf("the year is not leapyear");
    }
    else
    {
      if(year%4==0)
      {
        printf("the year is leap year");   
      }
      else
      {
        printf("the year is not leap year");
      }
    }
    return 0;
}      

    
