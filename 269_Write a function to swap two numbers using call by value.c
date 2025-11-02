#include <stdio.h>
// Function to swap numbers (call by value)
void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function after swapping:\n");
    printf("a = %d, b = %d\n", a, b);
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(x, y);
    printf("After function call (main):\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
