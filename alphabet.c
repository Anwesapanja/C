#include<stdio.h>
int main()
{
    char al;
    printf("enter a alphabet: ");
    scanf("%c",&al);
    switch(al)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        printf("vowel");
        break;
        default:
        printf("consonant");
    }
    return 0;
}