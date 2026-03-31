#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define all(a) a.begin(), a.end()
#define loop(i, n) for (int i = 0; i < n; i++)
#define rloop(i, m, n) for (int i = n; i >= m; i--)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
const int mod = 1e9 + 7;

template <typename T>
inline T Power(T a, T b)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b and a == 0)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = Power(a, b);
    cout << ans << endl;
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