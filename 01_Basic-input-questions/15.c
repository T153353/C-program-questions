// // C program to print return value of printf() function

// // Header files
#include <stdio.h>
// // Main Function Start
int main()
{
    int returnValue;
    returnValue = printf("Hello");
    printf("\nReturn of printf(\"Hello\") => %d", returnValue);
    printf("\nIt means printf() returns the number of characters printed on screen");
    return 0;
}
// // Main Function End
