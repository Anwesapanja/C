#include<stdio.h>
int main()
{
    int a;
    printf("enter the number of the month");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("the month is Jan");
        break;
        case 2:printf("the month is Feb");
        break;
        case 3:printf("the month is March");
        break;
        case 4:printf("the month is April");
        break;
        case 5:printf("the month is May");
        break;
        case 6:printf("the month is June");
        break;
        case 7:printf("the month is July");
        break;
        case 8:printf("the month is Aug ");
        break;
        case 9:printf("the month is Sep");
        break;
        case 10:printf("the month is oct");
        break;
        case 11:printf("the month is Nov");
        break;
        case 12:printf("the month is Dec");
        break;
        default:printf("invalid");
    }
    return 0;
}