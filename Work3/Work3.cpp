#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 
#define M 5 

int matrix[N][M];

void fillMatrix() 
{
    srand(time(NULL)); 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) 
        {
            matrix[i][j] = rand() % 100; 
        }
    }
}

void swapColumns() 
{
    int minCol = 0, maxCol = 0;
    int minElem = matrix[0][0], maxElem = matrix[0][0];

    for (int j = 0; j < M; j++) 
    {
        for (int i = 0; i < N; i++)
        {
            if (matrix[i][j] < minElem) 
            {
                minElem = matrix[i][j];
                minCol = j;
            }
            if (matrix[i][j] > maxElem) 
            {
                maxElem = matrix[i][j];
                maxCol = j;
            }
        }
    }

    if (minCol != maxCol)
    {
        for (int i = 0; i < N; i++) 
        {
            int temp = matrix[i][minCol];
            matrix[i][minCol] = matrix[i][maxCol];
            matrix[i][maxCol] = temp;
        }
    }
}

void printMatrix() 
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) 
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix[N][M];

    fillMatrix();

    printf("After:\n");
    printMatrix();

    swapColumns();

    printf("\nBefore:\n");
    printMatrix();

    return 0;
}