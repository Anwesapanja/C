#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000]; 
    int i,alphabets=0,digits=0,specialcharacters=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z') )
          alphabets++;
        else if(s[i]>='0' && s[i]<='9')
         digits++;
        else
         specialcharacters++;
 
 	}
 	
     
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
    
 
    return 0;
}