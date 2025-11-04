#include <stdio.h>
// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int num) {
    char hex[32];
    int i = 0;
    int remainder;

    // Handle case when number is 0
    if(num == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    // Convert decimal to hexadecimal
    while(num > 0) {
        remainder = num % 16;

        // Store remainder as hex digit
        if(remainder < 10)
            hex[i] = remainder + 48;   // 48 is ASCII for '0'
        else
            hex[i] = remainder + 55;   // 55 + 10 = 65 → 'A'

        num = num / 16;
        i++;
    }

    // Print hex number in reverse order
    printf("Hexadecimal: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}
int main() {
    int num;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Function call
    decimalToHexadecimal(num);
    return 0;
}
