///https://www.codechef.com/problems/EXPCAN

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// int n;
// double dp1[1000][1000], dp2[1000][1000];
// double fnd(int s, int e, int *a, bool alice)
// {
//     if (alice)
//     {
//         if (dp1[s][e])
//             return dp1[s][e];
//         if (s == e)
//         {
//             dp1[s][e] = a[s];
//             return a[s];
//         }
//         dp1[s][e] = 0.5 * (a[s] + fnd(s + 1, e, a, false) + a[e] + fnd(s, e - 1, a, false));
//         return dp1[s][e];
//     }
//     else
//     {
//         if (dp2[s][e])
//             return dp2[s][e];
//         if (s == e)
//         {
//             dp2[s][e] = 0;
//             return 0;
//         }
//         dp2[s][e] = 0.5 * (fnd(s + 1, e, a, true) + fnd(s, e - 1, a, true));
//         return dp2[s][e];
//     }
// }

// void solve()
// {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             dp1[i][j] = dp2[i][j] = 0;
//         }
//     }
//     int a[1001];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" ,&a[i]);
//     }
//     printf("%0.15lf", fnd(0, n - 1, a, true) );
// }

// int main()
// {
//     int T;
//     scanf("%d",&T);
//     while (T--)
//         solve();
//     return 0;
// }
/////////////////////////////////////******************************************************
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>
// #define ll long long int

// double dp[1007][1007];

// double helper(ll a[1007], int l, int r)
// {
//     if (l > r)
//         return 0;
//     if (dp[l][r] > 0.0)
//         return dp[l][r];
//     double ar = a[l] + (helper(a, l + 2, r) + helper(a, l + 1, r - 1)) * 0.5;
//     double b = a[r] + (helper(a, l + 1, r - 1) + helper(a, l, r - 2)) * 0.5;
//     return dp[l][r] = ((ar + b) * 0.5);
// }

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         for (int i = 0; i < 1007; i++)
//             for (int j = 0; j < 1007; j++)
//                 dp[i][j] = 0.0;
//         int n;
//         scanf("%d",&n);
//         ll a[1007];
//         for (int i = 0; i < n; i++)
//             scanf("%d", &a[i]);
//         printf("%0.15lf",helper(a, 0, n - 1) );
//     }
//     return 0;
// }

///////////////////////**********************************************************************

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdbool.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <malloc.h>

// float Findval(float *piArray, int iStart, int iEnd, float iarr[100][100])
// {
//     float iVal1, iVal2, iRet, iFind1, iFind2;
//     if (iarr[iStart][iEnd] != 0.0)
//         return iarr[iStart][iEnd];

//     if (iStart == iEnd)
//     {
//         iRet = piArray[iStart];
//         iarr[iStart][iEnd] = iRet;
//         return iRet;
//     }
//     if (iStart + 1 == iEnd)
//     {
//         float i = piArray[iStart];
//         float j = piArray[iEnd];
//         iRet = (i + j) / 2;
//         iarr[iStart][iEnd] = iRet;
//         return iRet;
//     }

//     iFind1 = Findval(piArray, iStart + 2, iEnd, iarr);
//     iFind2 = Findval(piArray, iStart + 1, iEnd - 1, iarr);
//     iVal1 = (piArray[iStart] + iFind1 + piArray[iStart] + iFind2) / 2;

//     iFind1 = Findval(piArray, iStart, iEnd - 2, iarr);
//     iFind2 = Findval(piArray, iStart + 1, iEnd - 1, iarr);
//     iVal2 = (piArray[iEnd] + iFind1 + piArray[iEnd] + iFind2) / 2;

//     iRet = (iVal1 + iVal2) / 2;
//     iarr[iStart][iEnd] = iRet;
//     return iRet;
// }

// int main()
// {
//     int iTestNumber, iarrSize;
//     float *piarr;
//     float iResult;
//     float iarrVisited[100][100];
//     int i, j, k;
//     scanf("%d", &iTestNumber);

//     for (k = 0; k < iTestNumber; k++)
//     {
//         for (i = 0; i < 100; i++)
//             for (j = 0; j < 100; j++)
//                 iarrVisited[i][j] = 0.0;

//         scanf("%d", &iarrSize);

//         piarr = (float *)malloc(sizeof(float) * iarrSize);
//         for (j = 0; j < iarrSize; j++)
//         {
//             scanf("%f", &piarr[j]);
//         }

//         iResult = Findval(piarr, 0, iarrSize - 1, iarrVisited);

//         printf("%.15lf\n", iResult);
//     }

//     return 0;
// }

////////////////////////////***********************************************************************

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>
#include <malloc.h>
typedef long long ll;
#define max(x, y) x > y ? x : y
#define min(x, y) x < y ? x : y

int a[1001], pre[1001], suf[1001];
int st[1001], id[1001], top;
ll decrease[1001], increase[1001], constant[1001];
ll tmp[1001];
void cal(int, int, int);

void init();
void work();
int ca = 1;
int main()
{
    //    init();
    int T;
    scanf("%d" ,&T);
    while (T--)
        work();
    return 0;
}
void work()
{
    int n;
    scanf("%d" ,&n);
    for (int i = 1; i <= n; i++)
        scanf("%d" ,&a[i]), a[i + n] = a[i];
    top = 0;
    id[0] = 0;
    for (int i = 1; i <= n * 2; i++)
    {
        while (top && st[top] < a[i])
            top--;
        pre[i] = i - id[top];
        st[++top] = a[i], id[top] = i;
    }
    top = 0;
    id[0] = 2 * n + 1;
    for (int i = 2 * n; i; i--)
    {
        while (top && st[top] <= a[i])
            top--;
        suf[i] = id[top] - i;
        st[++top] = a[i], id[top] = i;
    }
    //    cout<<"a: ";
    //    for(int i=1;i<=2*n;i++) cout<<a[i]<<' ';
    //    cout<<endl;
    //    cout<<"pre: ";
    //    for(int i=1;i<=2*n;i++) cout<<pre[i]<<' ';
    //    cout<<endl;
    //    cout<<"suf: ";
    //    for(int i=1;i<=2*n;i++) cout<<suf[i]<<' ';
    //    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        decrease[i] = increase[i] = constant[i] = 0;
    }
    for (int i = 1; i <= n; i++)
        cal(pre[i], min(n - i + 1, suf[i]), a[i]);
    for (int i = 1; i <= n; i++)
    {
        decrease[i] += decrease[i - 1];
        increase[i] += increase[i - 1];
        constant[i] += constant[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        tmp[i] = (increase[i] + decrease[i]) * i + constant[i];
        increase[i] = decrease[i] = constant[i] = 0;
    }
    for (int i = 1; i <= n * 2; i++)
        cal(pre[i], suf[i], a[i]);
    for (int i = 1; i <= n; i++)
    {
        decrease[i] += decrease[i - 1];
        increase[i] += increase[i - 1];
        constant[i] += constant[i - 1];
        tmp[i] = (decrease[i] + increase[i]) * i + constant[i] - tmp[i];
    }
    for (int i = 1; i <= n; i++)
        printf("%d " ,tmp[i] );
    printf("\n");
}
void cal(int l, int r, int A)
{
    if (l > r)
    {
        int lol ;
        lol = l ;
        l = r ;
        r = lol ; 
        //swap(l, r);
    }    
    increase[1] += A, increase[l + 1] -= A;
    if (l < r)
    {
        constant[l + 1] += 1LL * A * l;
        constant[r + 1] -= 1LL * A * l;
    }
    constant[r + 1] += 1LL * (r + l) * A;
    constant[l + r] -= 1LL * (r + l) * A;
    decrease[r + 1] -= A;
    decrease[l + r] += A;
}