/*
NAME:KELVIN KANGERI CHEGE 
REG NO:CT100/G/26144/25
DATE:27/10/2025
DESCRIPTION:A 1D ARRAY TO RECORD A HOTELS WEEKLY REVENUE
*/#include <stdio.h>

int main() {
    float hours, rate;
    float gross_pay, taxes, net_pay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40) {
        gross_pay = hours * rate;
    } else {
        gross_pay = (40 * rate) + ((hours - 40) * rate * 1.5);
    }

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = 0.15 * gross_pay;
    } else {
        taxes = (0.15 * 600) + (0.20 * (gross_pay - 600));
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Output
    printf("\nGross Pay: $%.2f", gross_pay);
    printf("\nTaxes: $%.2f", taxes);
    printf("\nNet Pay: $%.2f\n", net_pay);

    return 0;
}