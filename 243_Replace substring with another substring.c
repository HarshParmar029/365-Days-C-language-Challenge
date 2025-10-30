#include <stdio.h>
#include <string.h>
int main() {
    char str[200], sub[50], rep[50], result[300];
    int i, j, k, found, start, len, subLen, repLen;

    // Input main string
    printf("Enter main string: ");
    gets(str);  // or use fgets(str, 200, stdin);

    // Input substring to replace
    printf("Enter substring to replace: ");
    gets(sub);

    // Input new substring
    printf("Enter new substring: ");
    gets(rep);

    i = j = 0;
    result[0] = '\0';  // initialize empty result string

    subLen = strlen(sub);
    repLen = strlen(rep);
    len = strlen(str);
    while (i < len) {
        found = 1;

        // Check if substring matches at position i
        for (k = 0; k < subLen; k++) {
            if (str[i + k] != sub[k]) {
                found = 0;
                break;
            }
        }

        if (found) {
            // Copy replacement string into result
            strcat(result, rep);
            i += subLen; // Skip the substring
        } else {
            // Copy one character from main string
            int tempLen = strlen(result);
            result[tempLen] = str[i];
            result[tempLen + 1] = '\0';
            i++;
        }
    }
    printf("String after replacement: %s", result);
    return 0;
}
