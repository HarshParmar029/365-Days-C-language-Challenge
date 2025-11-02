#include <stdio.h>
// Function to reverse a number
int reverseNumber(int num) {
    int rev = 0, rem;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
// Function to check if a number is palindrome
void checkPalindrome(int num) {
    int rev = reverseNumber(num);
    if (num == rev)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    checkPalindrome(number);
    return 0;
}
