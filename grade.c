#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per;
    printf("the value of the numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("The value of %d\n",total);
    per=((total*100)/(5.0*100));
    printf("the percentage is %f\n",per);
    if(per>=80)
    {
        printf("the grade is A+");
    }
    else
    {
        if((per<=80)&&(per>=65))
        {
            printf("the grade is A");
        }
        else
        {
            if((per<=65)&&(per>=50))
            {
                printf("the grade is B");
            }
            else
            {
                if((per<=50)&&(per>=42))
                {
                    printf("the grade is C");
                }
                else
                {
                    printf("Fail");
                }
                
            }
        }

    }
    return 0;
}


