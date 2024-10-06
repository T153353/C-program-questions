// // C program to take input a number in Decimal form and print its Octal form

// // Header files
#include <stdio.h>

// // Main Function Start
int main()
{

    int num;
    printf("\nEnter A Number (Use Decimal Number System) => ");
    scanf("%d", &num);
    printf("\nOctal Representation of %d => %o\n", num, num); // // %o is used to print octal form.
    return 0;
}
// // Main Function End
