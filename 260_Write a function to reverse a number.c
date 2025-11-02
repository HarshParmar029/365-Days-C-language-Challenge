#include <stdio.h>
// Function to reverse a number
int reverseNumber(int num) {
    int rev = 0, rem;

    while (num != 0) {
        rem = num % 10;          // Get last digit
        rev = rev * 10 + rem;    // Add digit to reversed number
        num = num / 10;          // Remove last digit
    }

    return rev;
}
int main() {
    int number, reversed;
    printf("Enter a number: ");
    scanf("%d", &number);
    reversed = reverseNumber(number);
    printf("Reversed number = %d\n", reversed);
    return 0;
}
