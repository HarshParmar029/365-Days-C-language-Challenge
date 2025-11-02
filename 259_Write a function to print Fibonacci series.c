#include <stdio.h>8
// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int a = 0, b = 1, next, i;

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}
