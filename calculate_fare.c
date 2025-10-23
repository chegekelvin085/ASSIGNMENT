/*
NAME:KELVIN KANGERI CHEGE
REG NO:CT100/G/26144/25
DESCRIPTION:calculate fare
*/
#include <stdio.h>

// Function to calculate total fare
int calculateFare(int distance) {
    int fare = distance * 50;
    return fare;
}

int main() {
    int distance;
    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);

    int totalFare = calculateFare(distance);
    printf("Total fare = KSh. %d\n", totalFare);

    return 0;
}