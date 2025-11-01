#include <stdio.h>

// Function to return minimum of three numbers
int minOfThree(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}
int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int min = minOfThree(num1, num2, num3);
    printf("Minimum number is: %d", min);

    return 0;
}
