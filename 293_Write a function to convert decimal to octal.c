#include <stdio.h>
// Function to convert decimal to octal
void decimalToOctal(int num) {
    int octal[32];
    int i = 0;

    // Handle case when number is 0
    if(num == 0) {
        printf("Octal: 0\n");
        return;
    }

    // Convert decimal to octal
    while(num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    // Print octal number in reverse order
    printf("Octal: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}
int main() {
    int num;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Function call
    decimalToOctal(num);

    return 0;
}
