/*
NAME:KELVIN KANGERI CHEGE 
REG NO:CT100/G/26144/25
DATE:27/10/2025
DESCRIPTION:A 1D ARRAY TO RECORD A HOTELS WEEKLY REVENUE#include <stdio.h>
*/
#include <stdlib.h>

// Function prototypes
void writeInputFile();
void processNumbers();
void displayFiles();

int main() {
    writeInputFile();   // Step 1: Get numbers and store in input.txt
    processNumbers();   // Step 2: Calculate sum & average → output.txt
    displayFiles();     // Step 3: Display both files' content

    return 0;
}

// 1️⃣ Function to prompt user and write 10 integers into "input.txt"
void writeInputFile() {
    FILE *fptr;
    int num, i;

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
    printf("✅ Numbers successfully written to input.txt\n\n");
}

// 2️⃣ Function to read integers, calculate sum & average, write to output.txt
void processNumbers() {
    FILE *inFile, *outFile;
    int num, sum = 0, count = 0;
    float avg;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(inFile);

    if (count == 0) {
        printf("No numbers found in input.txt!\n");
        exit(1);
    }

    avg = (float)sum / count;

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(outFile, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(outFile);

    printf("✅ Results written to output.txt\n\n");
}

// 3️⃣ Function to read and display both files
void displayFiles() {
    FILE *inFile, *outFile;
    char ch;

    printf("Contents of input.txt:\n");
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(inFile)) != EOF)
        putchar(ch);
    fclose(inFile);

    printf("\nContents of output.txt:\n");
    outFile = fopen("output.txt", "r");
    if (outFile == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(outFile)) != EOF)
        putchar(ch);
    fclose(outFile);
}