#include <stdio.h>

void Sum(int num1, int num2);
int main() {
    int a = 10, b = 20;
    Sum(a, b);
    return 0;
}
void Sum(int num1, int num2) {
    int sum = num1 + num2;
    printf("The sum is: %d\n", sum);
}
