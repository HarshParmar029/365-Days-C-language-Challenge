//. Find sum of series 1 + 1/2 + 1/3 + ... + 1/n


#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += 1.0 / i;

    printf("Sum = %.4lf", sum);
    return 0;
}
