#include <stdio.h>
// Function declaration
int factorial(int n);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
// Function definition
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
