#include <stdio.h>
#define pcx putchar
#define gcx getchar
long int fastInput()
{
    long int val = 0;
    char c = gcx();
    while (c < '0' || c > '9')
        c = gcx();
    while (c >= '0' && c <= '9')
    {
        val = (val << 1) + (val << 3) + (c - '0');
        c = gcx();
    }
    return val;
}
int main()
{
    int t = 0, i = 0;
    long int N = 0, tot = 0, sum = 0;
    double res = 0;

    t = (int)fastInput();
    while (t--)
    {
        N = fastInput();
        tot = 0;
        for (i = 0; i < N; i++)
            tot += fastInput();

        sum = N * 100;
        res = ((double)tot / (double)sum) * 100;
        printf("%.8f\n", res);
    } //end of while
    return 0;
}