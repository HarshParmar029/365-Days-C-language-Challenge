#include <stdio.h>
// User-defined function to find square
int square(int n) {
    return n * n;
}
int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);  // Function call

    printf("Square of %d = %d", num, result);
    return 0;
}
