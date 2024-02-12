#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrix:\n");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols], transposeMatrix[cols][rows];
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);} }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposeMatrix[i][j] = matrix[j][i];} }
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
}

