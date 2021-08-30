#include <stdio.h>
#include <limits.h>

int main()
{
    int m, n, sum = 0;
    scanf("%d %d", &m, &n);
    int i, j;
    int mat[100][100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                sum = sum + mat[i][j];
            }
        }
    }
    printf("%d", sum);

    return 0;
}