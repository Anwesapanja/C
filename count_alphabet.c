#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,found;
    char A[50],count;
    printf("enter thr string will be: ");
    gets(A);
    len=strlen(A);
    printf("the length of the string will be:%d ",len);
    printf("enter thr count character");
    scanf("%c",&count);
    for(i=0;i<len;i++)
    {
        if(count==A[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("%c in this string %d no position",count,i+1);
    }
    else
    {
        printf("not found");
    }
    return 0;
}    