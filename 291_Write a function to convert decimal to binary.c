#include <stdio.h>
// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32];  // to store binary digits
    int i = 0;

    // Handle case when number is 0
    if(num == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary number in reverse order
    printf("Binary: ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}
int main() {
    int num;

    // Input number
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    // Function call
    decimalToBinary(num);
    return 0;
}
