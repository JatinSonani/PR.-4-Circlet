//Q.2 Write a Program to print the below pattern using nested for loop.

//   11
//   12 13
//   14 15 16
//   17 18 19 20
//   21 22 23 24 25

#include <stdio.h>

int main() {
    int num = 11 , j;
    

    for (int i = 1; i <= 5; i++)
    {
    	
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
	}

    }
