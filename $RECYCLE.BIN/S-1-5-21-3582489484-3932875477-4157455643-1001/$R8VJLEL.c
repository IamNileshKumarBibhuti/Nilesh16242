// MODIFIED KADANE'S ALGORITHM

#include <stdio.h>
long k, s;
long getp(long num)
{
    long num2 = num, i, p = 0;
    for (i = 2; i <= num2; i++)
    {
        if (num % i != 0)
            continue;
        p++;
        while (num % i == 0)
            num /= i;
        if (num == 0)
            return p;
    }
    return p;
}
long getmult(long num)
{
    return k - getp(num) * s;
}
long gcd(long a, long b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
int main()
{
    long maxspsum = 0, val, val1, val2, n, i, sum, prod, a;
    long subsum = 0, subprod = 1;
    scanf("%ld %ld %ld", &n, &k, &s);
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &a);
        sum = subsum + a;
        prod = subprod * a / gcd(subprod, a);
        val1 = a * getmult(a);
        val2 = sum * getmult(prod);
        if (val1 > val2)
        {
            subsum = a;
            subprod = a;
            val = val1;
        }
        else
        {
            subsum = sum;
            subprod = prod;
            val = val2;
        }
        if (val > maxspsum)
            maxspsum = val;
    }
    printf("%ld\n", maxspsum);
    return 0;
}