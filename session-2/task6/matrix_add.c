#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    // Check command-line argument
    if (argc != 2) {
        printf("Usage: %s <matrix_size>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("Matrix size must be positive.\n");
        return 1;
    }

    // Allocate memory for matrices
    int **mat1 = malloc(n * sizeof(int *));
    int **mat2 = malloc(n * sizeof(int *));
    int **sum  = malloc(n * sizeof(int *));

    if (mat1 == NULL || mat2 == NULL || sum == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int j = 0; j < n; ++j) {
        mat1[j] = malloc(n * sizeof(int));
        mat2[j] = malloc(n * sizeof(int));
        sum[j]  = malloc(n * sizeof(int));

        if (mat1[j] == NULL || mat2[j] == NULL || sum[j] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Set initial data
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            mat1[j][k] = -2;
            mat2[j][k] = 3;
        }
    }

    // Compute sum
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            sum[j][k] = mat1[j][k] + mat2[j][k];
        }
    }

    // Print result
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            printf("%d ", sum[j][k]);
        }
        printf("\n");
    }

    // Free memory
    for (int j = 0; j < n; ++j) {
        free(mat1[j]);
        free(mat2[j]);
        free(sum[j]);
    }

    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}