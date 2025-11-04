#include <stdio.h>
// Recursive function to find factorial
long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;               // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}
int main() {
    int num;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if(num < 0)
        printf("Factorial of negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %lld\n", num, factorial(num));
    return 0;
}
