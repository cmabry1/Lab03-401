#include <stdio.h>
#include "factorial.h"

int main() {
    int num;

    printf("Enter a number (0-%d): ", MAX);
    scanf("%d", &num);

    if (num < 0 || num > MAX) {
        printf("Invalid input! Please enter a number between 0 and %d.\n", MAX);
        return 1;
    }

    printf("\nUsing Iterative Method:\n");
    printf("Factorial of %d = %llu\n", num, factorial_iterative(num));

    printf("\nUsing Recursive Method:\n");
    printf("Factorial of %d = %llu\n", num, factorial_recursive(num));

    return 0;
}
