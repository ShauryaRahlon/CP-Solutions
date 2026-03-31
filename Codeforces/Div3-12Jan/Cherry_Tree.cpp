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
ll calc(ll n)
{
    if (n <= 0)
        return 0;
    return n * (n + 1) / 2;
}
void solve()
{
    int n;
    cin >> n;
    vl a(n);
    read(a);

    vector<vector<int>> pos(n);
    for (int i = 0; i < n - 1; ++i)
    {
        int diff = abs(a[i] - a[i + 1]);
        pos[diff].push_back(i);
    }

    set<int> w;
    w.insert(-1);
    w.insert(n - 1);

    ll curr_ans = calc(n - 1);
    vl res;
    for (int k = 1; k < n; ++k)
    {
        res.pb(curr_ans);

        for (int i : pos[k])
        {
            auto it = w.lower_bound(k);
            int rw = *it;
            int lw = *prev(it);

            ll old_len = rw - lw - 1;
            curr_ans -= calc(old_len);

            ll len1 = k - lw - 1;
            ll len2 = rw - k - 1;

            curr_ans += calc(len1);
            curr_ans += calc(len2);
            w.insert(k);
        }
    }
    p2(ans);
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