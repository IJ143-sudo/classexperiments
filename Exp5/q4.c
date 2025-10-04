/*WAP that reads two matrices A (m x n) and B (p x q) and computes the product A
and B. Read matrix A and matrix B in row major order respectively. Print both the
input matrices and resultant matrix with suitable headings and output should be in
matrix format only. Program must check the compatibility of orders of the matrices
for multiplication. Report appropriate message in case of incompatibility*/

#include <stdio.h>

int main() {
    int rowsA, colsA, rowsB, colsB;
    int i, j, k;

    // Input dimensions of Matrix A
    printf("Enter number of rows and columns of Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    int matrixA[rowsA][colsA];

    // Input elements of Matrix A
    printf("Enter elements of Matrix A in row-wise order:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input dimensions of Matrix B
    printf("Enter number of rows and columns of Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    int matrixB[rowsB][colsB];

    // Input elements of Matrix B
    printf("Enter elements of Matrix B in row-wise order:\n");
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Check compatibility for multiplication
    if(colsA != rowsB) {
        printf("\nMatrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    // Declare Resultant Matrix
    int product[rowsA][colsB];

    // Initialize product matrix to 0
    for(i = 0; i < rowsA; i++)
        for(j = 0; j < colsB; j++)
            product[i][j] = 0;

    // Matrix Multiplication
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            for(k = 0; k < colsA; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsA; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for(i = 0; i < rowsB; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }

    // Print Product Matrix
    printf("\nProduct Matrix (A x B):\n");
    for(i = 0; i < rowsA; i++) {
        for(j = 0; j < colsB; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}