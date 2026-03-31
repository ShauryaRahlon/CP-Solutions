#include <bits/stdc++.h>
/*------------------------- Type Defs ----------------------*/
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

/*------------------------- Macros -------------------------*/
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define all(a) a.begin(), a.end()
#define loop(x, start, end) for (ll x = start; x < end; x++)
#define rloop(i, m, n) for (int i = n; i >= m; i--)
#define read(x) loop(i, 0, x.size()) cin >> x[i];
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p(x) cout << x << endl
#define p2(arr)                                   \
    loop(i, 0, arr.size()) cout << arr[i] << " "; \
    cout << endl
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)

/*------------------------- Maths --------------------------*/
const int MOD = 1e9 + 7;
template <typename T>
inline T gcd(T a, T b)
{
    T c;
    while (b)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}
template <typename T>
inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template <typename T>
inline bool isPrime(T n)
{
    for (T i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
template <typename T>
inline T Power_MOD(T a, T b)
{
    T res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
template <typename T>
inline T Power(T a, T b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a *= a;
        b >>= 1;
    }
    return res;
}

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vi a(n + 1, 0);

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    //  1 2 3 4 5 6 7
    //  1 4 3 2 5 s s
    for (int i = 1; i <= n; i += 2)
    {
        vi temp;
        for (int j = i; j <= n; j *= 2)
        {
            temp.pb(a[j]);
        }
        sort(all(temp));

        int idx = 0;
        for (int j = i; j <= n; j *= 2)
        {
            a[j] = temp[idx++];
        }
    }
    if (is_sorted(a.begin() + 1, a.end()))
    {
        yes;
        return;
    }
    no;
}
int main()
{

    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}