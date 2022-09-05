// Declare two 3 x 3 square matrices and display the matrix sum.
//The following illustration shows the process of calculating the matrix sum. The values are used as samples.
//
////  3   2   4       2   6   3       5   8   7
////  1   4   6   +   4   3   2   =   5   7   8
////  4   3   2       5   1   7       9   4   9

#include <stdio.h>
int main(){
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    printf("Input Values for Matrix 01: \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Input Values for Matrix 02: \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix 01\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 02\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nMatrix Sum\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
