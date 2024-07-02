#include<stdio.h>
#include<string.h>
int main()
{
    int len1, len2,i,j;
    char A[10],B[10];
    static char c[50];
    printf("the first string will be: ");
    gets(A);
    printf("the 2nd string will be: ");
    gets(B);
    printf("the length of the string: ");
    len1=strlen(A);
    printf("%d\n",len1);
    len2=strlen(B);
    printf("length of the 2nd string will be %d\n",len2);
    for(i=0;i<len1;i++)
    {
        c[i]=A[i];
    }
    for(j=0;j<len2;j++)
    {
        c[i+j]=B[j];
    }
    printf("the result will be : ");
    puts(c);
    return 0;
}
    