#include<stdio.h>
int main()
{
    int number;
    printf(" enter a number");
    scanf("%d",&number);
    switch (number > 0) {
        case 1:
            printf("Positive\n");
            break;
        case 0:
            switch (number < 0) {
                case 1:
                    printf("Negative\n");
                    break;
                case 0:
                    printf("Zero\n");
                    break;
            }
            break;
    }
    return 0;
    
}