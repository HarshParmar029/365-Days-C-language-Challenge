#include <stdio.h>
// Function to check if a matrix is sparse
int isSparse(int matrix[10][10], int rows, int cols) {
    int i, j, countZero = 0;
    int totalElements = rows * cols;

    // Count number of zero elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] == 0)
                countZero++;
        }
    }

    // Check if more than half elements are zero
    if(countZero > (totalElements / 2))
        return 1;  // Sparse
    else
        return 0;  // Not Sparse
}
int main() {
    int matrix[10][10], rows, cols, i, j;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check and display result
    if(isSparse(matrix, rows, cols))
        printf("\nThe matrix is a Sparse Matrix.\n");
    else
        printf("\nThe matrix is NOT a Sparse Matrix.\n");
    return 0;
}
