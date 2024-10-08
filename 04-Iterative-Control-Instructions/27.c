// // C program to count digits of a given number

// // Header Files
#include <stdio.h>

// // Main Function Start
int main()
{

    int num, count;
    printf("\nEnter A Number => ");
    scanf("%d", &num);

    for (count = num ? 0 : 1;num;num /= 10)
        count++;

    printf("\nNumber of Digit In Entered Number => %d", count);

    printf("\n");
    return 0;
}
// // Main Function End
