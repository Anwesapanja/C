//To find gross salary
#include<stdio.h>
int main()
{
    float BS,GS,HRA,DA;
    printf ("enter the basic salary");
    scanf("%f",&BS);
    if(BS<1500)
    {
        HRA=((0.10)*BS);
        DA=((BS)*(0.90));
    }
    else
    {
        HRA=500;
        DA=(BS*(0.98));
    }
    GS=(BS+HRA+DA);
    printf("gross salary%f\n",GS);
return 0;    
}    