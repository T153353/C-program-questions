// // C program to print a Number without its Last Digit

// // Header Files
#include <stdio.h>

// // Main Function Start
int main()
{
    int num;
    printf("\nEnter An Integer => ");
    scanf("%d", &num);

    printf("\n%d Without last Digit => %d\n", num, num / 10);

    return 0;
}
// // Main Function End
