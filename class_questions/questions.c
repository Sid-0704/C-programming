#include <stdio.h>

int main() {
    int rows = 2;
    int cols = 3;
    int matrix[2][3];

    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }



    printf("\nMatrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}
