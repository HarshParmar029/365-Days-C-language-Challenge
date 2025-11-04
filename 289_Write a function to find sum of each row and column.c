#include <stdio.h>
// Function to calculate determinant of 3x3 matrix
int determinant3x3(int matrix[3][3]) {
    int det;

    det = matrix[0][0] * (matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
        - matrix[0][1] * (matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
        + matrix[0][2] * (matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);

    return det;
}
int main() {
    int matrix[3][3];
    int i, j;
    // Input elements of matrix
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate determinant
    int det = determinant3x3(matrix);
    // Display result
    printf("\nDeterminant of the matrix = %d\n", det);
    return 0;
}
