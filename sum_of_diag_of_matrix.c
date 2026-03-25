#include <stdio.h>

int main()
{
    int a[50][50], n, sum = 0, i, j;

    printf("Enter order of matrix ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j || (i + j == n - 1))
            {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d", sum);

    return 0;
}