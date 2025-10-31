#include <stdio.h>
// User-defined function
void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);  // Function call
    return 0;
}
