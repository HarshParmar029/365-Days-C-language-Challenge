#include <stdio.h>
#include <string.h>
int main() {
    int num, temp, i = 0, j;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);
    // Handle negative numbers
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;  // make number positive
    }
    // Convert integer to string (reverse order)
    temp = num;
    do {
        str[i++] = (temp % 10) + '0'; // convert digit to char
        temp = temp / 10;
    } while (temp != 0);
    if (isNegative)
        str[i++] = '-'; // add negative sign

    str[i] = '\0'; // terminate string

    // Reverse the string to get correct order
    for (j = 0; j < i / 2; j++) {
        char tempChar = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = tempChar;
    }
    printf("Converted string: %s\n", str);
    return 0;
}
