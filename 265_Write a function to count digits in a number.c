#include <stdio.h>
// Function to count digits in a number
int countDigits(int num) {
    int count = 0;
    // Handle negative numbers
    if (num < 0)
        num = -num;

    // If number is 0, it has 1 digit
    if (num == 0)
        return 1;
    // Count digits by dividing by 10
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int main() {
    int number, digits;
    printf("Enter a number: ");
    scanf("%d", &number);

    digits = countDigits(number);
    printf("Total digits in %d = %d\n", number, digits);
    return 0;
}
