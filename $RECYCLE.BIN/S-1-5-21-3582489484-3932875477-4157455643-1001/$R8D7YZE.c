#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], b[10], c[10], i, j, k = 0, x, count, n, m, t, uncommon = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < m; i++)
        {
            scanf("%d", &b[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    count = 0;
                    for (x = 0; x < k; x++)
                    {
                        if (a[i] == c[x])
                            count++;
                        uncommon++;
                    }
                    if (count == 0)
                    {
                        c[k] = a[i];
                        k++;
                        uncommon++;
                    }
                }
            }
        }
        printf("\nArray C (Contains Common Elements from two given Array):\n");
        for (i = 0; i < k; i++)
        {
            printf("%d ", c[i]);
        }
        if (uncommon == 0)
        {
            printf("0");
        }
    }
    return 0;
}