#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &row2, &col2);
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
    }
    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);} }
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);} }
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];} } }
    printf("Result of matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");} }

