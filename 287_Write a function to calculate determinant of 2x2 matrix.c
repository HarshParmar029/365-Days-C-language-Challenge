#include <stdio.h>
// Function to calculate determinant of 2x2 matrix
int determinant2x2(int matrix[2][2]) {
    int det;
    det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    return det;
}

int main() {
    int matrix[2][2];
    int i, j;
    // Input elements of matrix
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate determinant
    int det = determinant2x2(matrix);
    // Display result
    printf("\nDeterminant of the matrix = %d\n", det);
    return 0;
}
