/*
NAME:KELVIN KANGERI CHEGE
REG NO:CT100/G/26144/25
DESCRIPTION:convert to celsius
*/#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.1f°C\n", celsius);

    return 0;
}