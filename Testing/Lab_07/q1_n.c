#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
    int rows, cols, **data;
} Matrix;

Matrix *matCreate(int rows, int cols);
void matDelete(Matrix *);
Matrix *matFromFile(const char *filename);
void matPrint(Matrix *);
char *getFileFromUser(const char *prompt, char *filenameBuff);
void matShowRowsCols(Matrix *);
bool matCanMuliply(Matrix *, Matrix *);
Matrix *matMultiply(Matrix *, Matrix *);

int main() {
    char fileName[100];

    Matrix *mat1 = matFromFile(getFileFromUser("Enter File name of matrix #1 - with extention - : ", fileName));
    Matrix *mat2 = matFromFile(getFileFromUser("Enter File name of matrix #2 - with extention - : ", fileName));
    matShowRowsCols(mat1);
    matShowRowsCols(mat2);
    if (!matCanMuliply(mat1, mat2)) {
        printf("Cant multiply those two matrices \n");
    } else {
        matPrint(mat1);
        matPrint(mat2);

        Matrix *mat3 = matMultiply(mat1, mat2);
        matPrint(mat3);
        matDelete(mat3);
    }
    matDelete(mat1);
    matDelete(mat2);
    return 0;
}

Matrix *matCreate(int rows, int cols) {
    Matrix *m = malloc(sizeof(Matrix));
    m->rows = rows;
    m->cols = cols;
    m->data = malloc(rows * sizeof(int *));
    for(int row = 0; row < rows; row++) {
        int i=0;
        m->data[i] = malloc(cols * sizeof(int));
    }
    return m;
}


void matPrint(Matrix *m) {
    for(int row = 0; row < m->rows; row++) {
        for(int col = 0; col < m->cols; col++) {
            printf("%d\t",m->data[row][col]);
        }
        printf("\n");
    }
}
