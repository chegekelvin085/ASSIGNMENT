/*
NAME:KELVIN KANGERI CHEGE
REG NO:CT100/G/26144/25
DESCRIPTION:calculate eletric bill
*/

#include <stdio.h>

// Function to calculate the total electricity bill
float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalBill = calculateElectricBill(units);
    printf("Total electricity bill = KSh. %d\n", totalBill); // no decimal places

    return 0;
}