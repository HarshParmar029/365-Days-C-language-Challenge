#include <stdio.h>
#include <math.h>

// Function to count digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if number is Armstrong
void checkArmstrong(int num) {
    int original = num;
    int n = countDigits(num);
    int sum = 0, rem;

    while (num != 0) {
        rem = num % 10;
        sum += pow(rem, n);  // Raise digit to power of number of digits
        num /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkArmstrong(number);

    return 0;
}

