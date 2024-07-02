#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,j;
   static char A[50],B[50];
    printf("enter the string will be: ");
    gets(A);
    len=strlen(A);
    printf("the length of the string will be:%d\n",len);
    for(i=0;i<len;i++)
    {
        if(A[i]!=' ')
        {  

            B[j]=A[i];
            j++;
        }
    }    
    printf("the new string will be : ");
    puts(B);
    return 0;
}    