//Q.7 Write a Program to print the below pattern using nested for loop.
//  *  *  *  *  *
//  *           *
//  *  *  *  *  *

//  *           *
//  *           *

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces before the asterisks
        for (int space = 1; space <= rows - i; ++space) {
            printf(" ");
        }

        // Print asterisks for the first and last rows
        for (int j = 1; j <= i; ++j) {
            printf(" * ");
        }

        // Move to the next line
        printf("\n");
    }

    // Print the middle rows with spaces
    for (int i = 2; i < rows; ++i) {
        // Print spaces before the asterisks
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Print asterisks for the middle rows
        printf("*\n");
    }

   
}