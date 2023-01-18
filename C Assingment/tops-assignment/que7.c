#include<stdio.h>

// wap to convert temperature from degree centigrade to fahrenhrit.

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (1.8*celsius) + 32;
    printf("Temperature in Fahrenheit:%f ", fahrenheit);
    return 0;
}