#include "factorial.h"

// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}
