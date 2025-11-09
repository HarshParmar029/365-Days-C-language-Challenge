#include <stdio.h>
int main() {
    int a = 10, b = 20, sum;
    int *p1, *p2;
    p1 = &a;   // p1 points to a
    p2 = &b;   // p2 points to b
    sum = *p1 + *p2;  // add values using pointers
    printf("First number = %d\n", *p1);
    printf("Second number = %d\n", *p2);
    printf("Sum = %d\n", sum);
    return 0;
}
