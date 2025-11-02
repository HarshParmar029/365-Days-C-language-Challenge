#include <stdio.h>
// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0, rem;

    // Handle negative numbers
    if (num < 0)
        num = -num;
    while (num != 0) {
        rem = num % 10;   // Extract last digit
        sum += rem;       // Add to sum
        num /= 10;        // Remove last digit
    }
    return sum;
}
int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = sumOfDigits(number);

    printf("Sum of digits of %d = %d\n", number, result);
    return 0;
}
