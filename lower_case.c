#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char name[100];
    printf("enter the string will be: ");
    gets(name);
    len=strlen(name);
    printf("the length of the string will be:%d\n",len);
    for(i=0;i<len;i++)
    { 
        int p=0;
        p= name[i]; 
        if (p!=' ')
      {
        if((p>=65)&&(p<=90))
        {
            p=p+32;
            name[i]=p;
        }
      }
    }
    printf("the lower case string will be: ");
    puts(name);
    return 0;
}      