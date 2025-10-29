#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);   // take input string
    for(i = 0; str[i] != '\0'; i++) {
        // check for both uppercase and lowercase vowels
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
        }
    }
    printf("Total vowels = %d", count);
    return 0;
}
