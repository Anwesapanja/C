#include <stdio.h>

int main() {
    int c;
    float f;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &c);
    
    f = (c * 1.8) + 32;
    
    printf("The temperature in Fahrenheit is: %.2f\n", f);
    
    return 0;
}