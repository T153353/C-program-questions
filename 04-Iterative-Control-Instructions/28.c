// // C program to check whether a given number is a Prime number or not

// // A prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself. Negative integers can't be prime because when considering their factors, the concept of primality isn't applicable in the same way.

// // Header Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, i;
    printf("\nEnter a number to check whether it is prime or not: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("\nInvalid input, please enter a positive number greater than 1.");
        return 0;
    }

    if (num == 2) {
        printf("\n2 is a Prime Number.");
        return 0;
    }

    // Check for even numbers (2 is handled separately)
    if (num % 2 == 0) {
        printf("\n%d is Not a Prime Number.", num);
        return 0;
    }

    // Check for odd numbers
    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            printf("\n%d is Not a Prime Number.", num);
            return 0;
        }
    }

    printf("\n%d is a Prime Number.", num);
    return 0;
}

// // Main Function End
