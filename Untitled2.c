#include <stdio.h>
int main(void) 
{
    int r, c;
    printf("Enter rows cols: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || r > 50 || c <= 0 || c > 50) 
    {
        puts("Invalid size");
        return 0;
    }
    int A[50][50];
    printf("Enter %d x %d matrix:\n", r, c);
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) 
        {
            scanf("%d", &A[i][j]);
        }

    int (*p)[50] = A; // pointer to an array of 50 ints (row pointer)
    puts("Matrix via pointer-to-array:");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j) 
        {
            printf("%d ", p[i][j]);
        }
        puts("");
    }
    return 0;
}


