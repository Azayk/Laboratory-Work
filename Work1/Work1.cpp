#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int count = 0;
int product = 1;

int N = 3; 
int M = 4; 
int K;

int matrix[MAX_ROWS][MAX_COLS] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

void count_multiples_and_product()
{
    // Подсчет количества элементов К-й строки, кратных 5 
    for (int i = 0; i < M; i++) 
    { 
        if (matrix[K - 1][i] % 5 == 0) 
        { 
            count++;
        }

    }
    // Подсчет произведения нечетных элементов К-го столбца
    for (int i = 0; i < N; i++) 
    {
        if (matrix[K - 1][i] % 2 != 0) 
        {
            product *= matrix[K - 1][i];
        }
    }
}

int main() 
{
    printf("Enter the line number K (K <= 0 || K > 3) : ");
    scanf_s("%d", &K);

    if (K <= 0 || K > N) 
    { 
        printf("Error: invalid line number K.\n");
    }
    else 
    {
        count_multiples_and_product();
        printf("The number of elements of the %dth row, multiples of 5: %d\n", K + 1, count); 
        printf("The product of the odd elements of the %dth column: %d\n", K + 1, product); 
    }

    return 0;
}