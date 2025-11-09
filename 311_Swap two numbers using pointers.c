#include <stdio.h>
int main() {
    int a = 10, b = 20, temp;
    int *p1, *p2;
    p1 = &a;   // pointer p1 points to a
    p2 = &b;   // pointer p2 points to b
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
