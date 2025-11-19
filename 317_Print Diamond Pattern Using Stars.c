/*

  *
 ***
*****
 ***
  *

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter odd number of rows: ");
    scanf("%d", &n);

    int mid = n / 2;

    // Upper part
    for(int i = 0; i <= mid; i++) {
        for(int s = 0; s < mid - i; s++) printf(" ");
        for(int s = 0; s < 2*i + 1; s++) printf("*");
        printf("\n");
    }

    // Lower part
    for(int i = mid - 1; i >= 0; i--) {
        for(int s = 0; s < mid - i; s++) printf(" ");
        for(int s = 0; s < 2*i + 1; s++) printf("*");
        printf("\n");
    }

    return 0;
}
