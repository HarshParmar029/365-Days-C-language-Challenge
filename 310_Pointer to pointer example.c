#include <stdio.h>
int main() {
    int a = 10;       // simple integer variable
    int *p;           // pointer to integer
    int **pp;         // pointer to pointer
    p = &a;           // 'p' stores address of 'a'
    pp = &p;          // 'pp' stores address of 'p'
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of p (address of a) = %p\n", p);
    printf("Address of p = %p\n", &p);
    printf("Value of pp (address of p) = %p\n", pp);
    printf("Value pointed by p = %d\n", *p);
    printf("Value pointed by pp (value of a) = %d\n", **pp);
    return 0;
}
