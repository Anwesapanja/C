#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    static char A[10],B[10],*p;
    printf("the strimg will be: ");
    gets(A);
    len=strlen(A);
    printf("the length of the string will be %d",len);
    p=A;
    for(i=0;i<len;i++)
    {
      B[i]=*p;
      p++;
    }
    printf("\n");
    printf("the copy string will be ");
    puts(B);
    return 0;
}