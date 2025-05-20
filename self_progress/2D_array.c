#include <stdio.h>

void printMatrix(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[2][3]={
    {1,2,3},
    {3,5,6}
    };
    
    printMatrix(matrix,2);

    return 0;
}