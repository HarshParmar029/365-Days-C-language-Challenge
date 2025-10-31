#include <stdio.h>
#include <string.h>
int main() {
    char str[200], sub[100], result[300];
    int pos, i, j = 0, k = 0;

    // Input main string
    printf("Enter main string: ");
    gets(str);  // or use fgets(str, 200, stdin);

    // Input substring to insert
    printf("Enter substring to insert: ");
    gets(sub);

    // Input position
    printf("Enter position to insert (starting from 0): ");
    scanf("%d", &pos);

    // Copy characters before position
    for(i = 0; i < pos && str[i] != '\0'; i++) {
        result[j++] = str[i];
    }

    // Copy substring
    for(k = 0; sub[k] != '\0'; k++) {
        result[j++] = sub[k];
    }

    // Copy remaining part of main string
    for(; str[i] != '\0'; i++) {
        result[j++] = str[i];
    }

    result[j] = '\0'; // End the result string
    // Display result
    printf("String after insertion: %s", result);
    return 0;
}
