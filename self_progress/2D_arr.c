#include <stdio.h>

int main(){
    int rows;
    int cols;
    printf("Enter rows of 2D matrix: ");
    scanf("%d",&rows);
    printf("Enter columns of 2D matrix: ");
    scanf("%d",&cols);

    int matrix[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The matrix is:\n");

    for(int m=0; m<rows; m++){
        for(int n=0; n<cols; n++){
            printf("%d\t",matrix[m][n]);
        }
        printf("\n");
    }


    int edrow, edcol, newvalue;
    // printf("Enter the element's row and column to edit it: ");
    // scanf("%d",&edrow);
    // scanf("%d",&edcol);
    // printf("What should be the new value: ");
    // scanf("%d",newvalue);
    // matrix[edrow][edcol] = newvalue;

    matrix[0][1]=9;
    printf("\n");

    for(int x=0; x<rows; x++){
        for(int z=0; z<cols; z++){
            printf("%d\t",matrix[x][z]);
        }
        printf("\n");
    }


    return 0;
}