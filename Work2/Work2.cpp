#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int N = 3;
int M = 4;

int matrix[MAX_ROWS][MAX_COLS] = {
    {12, 13, 16, 19},
    {9, 10, 11, 12},
    {5, 6, 7, 8}
};

int min[MAX_ROWS]; 
int max; 

void find_min_max() 
{
    for (int i = 0; i < N; i++) 
    {
        min[i] = matrix[i][0]; 


        for (int j = 1; j < M; j++) 
        {
            if (matrix[i][j] < min[i]) 
            {
                min[i] = matrix[i][j];
            }
        }

        
        if (i == 0 || min[i] > max) 
        {
            max = min[i];
        }
    }
}

int main() 
{
    find_min_max();
    printf("Max in min = %d", max);
    return 0;
}
