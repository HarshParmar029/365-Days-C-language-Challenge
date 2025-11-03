#include <stdio.h>
#define SIZE 10
// Function to check if matrix is an identity matrix
int isIdentityMatrix(int matrix[SIZE][SIZE], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1)   // Diagonal element must be 1
                return 0;
            else if (i != j && matrix[i][j] != 0) // Non-diagonal element must be 0
                return 0;
        }
    }
    return 1;
}
int main() {
    int matrix[SIZE][SIZE];
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if(isIdentityMatrix(matrix, n))
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");
    return 0;
}
