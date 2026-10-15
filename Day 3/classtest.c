#include<stdio.h>
#include<stdlib.h>
int main() {
    
    int rows;
    int cols;
    printf("Enter the no. of rows:\n");
    scanf("%d",&rows);
    printf("Enter the no. of columns:\n");
    scanf("%d",&cols);
    int **matrix = malloc(rows*sizeof(int*));

    for(int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols*sizeof(int));
    }

    printf("Enter the elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\n",matrix[i][j]);
        }
    }

    int **result = malloc(cols * sizeof(int *));

    for(int i = 0; i < cols; i++) {
        result[i] = malloc(rows * sizeof(int));
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[j][rows - 1 - i] = matrix[i][j];
        }
    }
    printf("Rotated matrix:\n");

    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", result[i][j]);
         }
        printf("\n");
    }

    free(&matrix);
    free(&result);

    return 0;



}