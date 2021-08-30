#include<stdio.h>
int main()
{
    int row, col, t[3][3], k[3][3];
    printf("matrix A\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf_s("%d", &t[row][col]);
        }
    }
    printf("matrix B\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf_s("%d", &k[row][col]);
        }
    }
    printf("matrix C\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", t[row][col] + k[row][col]);
        }printf("\n");
    }
}