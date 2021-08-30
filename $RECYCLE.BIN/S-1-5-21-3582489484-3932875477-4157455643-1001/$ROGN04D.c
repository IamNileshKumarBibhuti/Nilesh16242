// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// const int N = 1e3 + 3;
// double dp[1000][1000][2];
// int vis[1000][1000][2] = {0};
// int color = 1;
// double arr[1000];

// double f(int i, int j, int turn)
// {
//     if (i == j)
//     {
//         if (turn)
//             return arr[i];
//         return 0;
//     }
//     double ret = dp[i][j][turn];
//     if (vis[i][j][turn] == color)
//         return ret;
//     vis[i][j][turn] = color;
//     if (turn)
//         ret = (f(i + 1, j, 0) + arr[i] + f(i, j - 1, 0) + arr[j]) / 2 ;
//     else
//         ret = (f(i + 1, j, 1) + f(i, j - 1, 1)) / 2;
//     return ret;
// }

// int main()
// {
//     int t, n;
//     scanf("%d", &t);
//     while (t--)
//     {
//         scanf("%d", &n);
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%lf", &arr[i]);
//         }
//         color++;
//         printf("%0.12lf\n", f(0, n - 1, 1));
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define pcc pair<char, char>
#define F first
#define S second
//#define int long long
#define pi 3.141592653589793238462643383279502
#define M 1000000007 //998244353
#define rep(i, a, n) for (int i = a; i < n; i++)
#define INF 100000000000000005
#define N 100005
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define endl "\n"
//typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
double dp[1001][1001];
int vis[1001][1001];
double a[1001];
int n;
void clear(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            vis[i][j] = 0;
        }
    }
}
double calc(int l, int r)
{
    if (l > r)
        return 0.0;
    if (l == r)
    {
        return a[l];
    }
    if (vis[l][r])
        return dp[l][r];
    vis[l][r] = 1;
    double ans = 0.0;
    ans = 0.25 * (a[l] + calc(l + 2, r));
    ans += 0.25 * (a[r] + calc(l + 1, r - 1));
    ans += 0.25 * (a[r] + calc(l, r - 2));
    ans += 0.25 * (a[l] + calc(l + 1, r - 1));
    return dp[l][r] = ans;
}
void solve()
{
    scanf("%d" ,&n);
    clear(n);
    rep(i, 0, n)
    {
        scanf("%lf" , &a[i] );
    } 
    double ans = calc(0, n - 1);
    printf("%0.12lf\n" ,ans );
}
int main()
{
    int tests;
    tests = 1;
    scanf("%d" ,&tests );
    for (int i = 0; i < tests; i++)
    {
        solve();
    }
}