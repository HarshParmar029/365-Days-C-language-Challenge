#include <stdio.h>
int harsh(int num1, int num2);
int main() {
    int x = 10, y = 5;
    int sum;
    sum = harsh(x, y);
    printf("The sum is: %d\n", sum);
    return 0;
}
int harsh(int num1, int num2) {
    int result = num1 + num2;
    return result;
}
