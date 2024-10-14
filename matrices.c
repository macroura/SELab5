#include <stdio.h>
#define SIZE 5

int main() {
    int m1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int m2[SIZE][SIZE] = {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}
    };
    int sum[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("sum:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d \n", sum[i][j]);
        }

    }
    int product[SIZE][SIZE] = {0};
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("product:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d \n", product[i][j]);
        }
    }
    int transposeA[SIZE][SIZE];
    int transposeB[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposeA[j][i] = m1[i][j];
            transposeB[j][i] = m1[i][j];
        }
    }
    printf("transpose matrix 1:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d \n", transposeA[i][j]);
        }
    }
    printf("transpose matrix 2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d \n", transposeB[i][j]);
        }
    }
    return 0;
}
