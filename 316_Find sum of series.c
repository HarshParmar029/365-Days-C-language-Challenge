//Find sum of series x + x² + x³ + ... + xⁿ

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    double sum = 0;

    printf("Enter x and n: ");
    scanf("%lf %d", &x, &n);

    for(int i = 1; i <= n; i++)
        sum += pow(x, i);

    printf("Sum = %.2lf", sum);
    return 0;
}
