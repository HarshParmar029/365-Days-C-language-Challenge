#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char str[], int l, int r) {
    int i;
    if (l == r)
        printf("%s\n", str);
    else {
        for (i = l; i <= r; i++) {
            swap(&str[l], &str[i]);       // Swap current index with start
            permute(str, l + 1, r);       // Recur for next positions
            swap(&str[l], &str[i]);       // Backtrack
        }
    }
}
int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    int n = strlen(str);
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}
