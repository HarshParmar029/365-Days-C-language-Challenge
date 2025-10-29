/*
Input a string from user.

Find its length using a loop.

Compare first and last characters, then move toward the center.

If all pairs match → palindrome
If any pair doesn’t match → not palindrome
*/
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    gets(str);   // take string input

    // find length of string
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    // check palindrome
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 1;  // not palindrome
            break;
        }
    }
    if(flag == 0)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");
    return 0;
}
