#include <stdio.h>
// Function to find transpose of a matrix
void transposeMatrix(int a[10][10], int trans[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = a[i][j];
        }
    }
}
// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a[10][10], trans[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    transposeMatrix(a, trans, rows, cols);

    printf("\nTranspose of the Matrix:\n");
    displayMatrix(trans, cols, rows);
    return 0;
}
