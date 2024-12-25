#include <stdio.h>

#define ROWS 3
#define COLS 3

void sortRowWise(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (*(matrix + i * cols + k) > *(matrix + i * cols + k + 1)) {
                    int temp = *(matrix + i * cols + k);
                    *(matrix + i * cols + k) = *(matrix + i * cols + k + 1);
                    *(matrix + i * cols + k + 1) = temp;
                }
            }
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    printf("Original Matrix:\n");
    printMatrix((int *)matrix, ROWS, COLS);

    sortRowWise((int *)matrix, ROWS, COLS);

    printf("\nSorted Matrix Row-wise:\n");
    printMatrix((int *)matrix, ROWS, COLS);

    return 0;
}