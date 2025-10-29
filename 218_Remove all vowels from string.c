#include <stdio.h>
int main() {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);   // take input string
    // remove vowels
    for(i = 0; str[i] != '\0'; i++) {
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
             str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')) {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';  // end new string

    printf("String after removing vowels: %s", newStr);
    return 0;
}
