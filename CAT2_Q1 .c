/*
NAME:KELVIN KANGERI CHEGE 
REG NO:CT100/G/26144/25
DATE:27/10/2025
DESCRIPTION:A 1D ARRAY TO RECORD A HOTELS WEEKLY REVENUE
*/
#include <stdio.h>
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    
    int i, j;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Move to next line after each row
    }
    
    return 0;
}