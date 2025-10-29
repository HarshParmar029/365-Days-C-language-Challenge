#include <stdio.h>
int main() {
    char str[20];
    int i = 0, num = 0, sign = 1;

    printf("Enter a numeric string: ");
    gets(str);   // Use fgets in modern compilers

    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    // Convert each character to number
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            break;  // stop if non-digit character found
        }
    }
    num = num * sign;
    printf("Integer value = %d\n", num);
    return 0;
}
