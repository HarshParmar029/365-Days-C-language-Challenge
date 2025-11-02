#include <stdio.h>
// Function to check if number is a Perfect Number
void checkPerfect(int num) {
    int sum = 0;
    // Find all divisors and add them
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    // Check if sum of divisors equals the number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkPerfect(number);
    return 0;
}
