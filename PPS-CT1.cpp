#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define all(c) ((c).begin()), ((c).end())
#define sz(x) ((int)(x).size())

#ifdef LOCAL
#include <print.h>
#else
#define trace(...)
#define endl '\n'
#endif
const int mod = 998244353;
const int N = 2500000;
int fact[N], invfact[N];
inline int add(int x, int y)
{
    x += y;
    if (x >= mod)
        x -= mod;
    return x;
}
inline int sub(int x, int y)
{
    x -= y;
    if (x < 0)
        x += mod;
    return x;
}
inline int mul(int x, int y) { return (((ll)x) * y) % mod; }
inline int powr(int a, ll b)
{
    int x = 1 % mod;
    while (b)
    {
        if (b & 1)
            x = mul(x, a);
        a = mul(a, a);
        b >>= 1;
    }
    return x;
}
inline int inv(int a) { return powr(a, mod - 2); }
void pre()
{
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < N; i++)
        fact[i] = mul(i, fact[i - 1]);
    invfact[N - 1] = inv(fact[N - 1]);
    for (int i = N - 2; i >= 1; i--)
        invfact[i] = mul(invfact[i + 1], i + 1);
    assert(invfact[1] == 1);
}

inline int C(int n, int k)
{
    if (n < k || k < 0)
        return 0;
    return mul(fact[n], mul(invfact[k], invfact[n - k]));
}

int get(int a, int b, int c)
{
    int ret = 0;
    for (int k = max(0, b + c); k <= a + b; k++)
        ret = add(ret, C(a + b, k));
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Remove in interactive problems
    int t;
    cin >> t;
    pre();
    while (t--)
    {
        int n;
        cin >> n;
        int odd = (n + 1) / 2, even = (n + 2) / 2;
        // starts at odd?
        int ans = 0;
        if (odd)
            ans = add(ans, mul(odd, get(even, odd - 1, 1)));
        ans = add(ans, mul(even, get(odd, even - 1, 1)));
        cout << ans << endl;
    }
}