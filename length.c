#include<stdio.h>
int main()
{
    char *p,*q;
    int len=0;
    printf("enter a string: ");
    gets(p);
    q=p;
    while (*p!='\0')
    {
      printf("%c\n",*p);  
     len++;
     p++;
    }
    printf("%d\n",len);
    puts(q);
}