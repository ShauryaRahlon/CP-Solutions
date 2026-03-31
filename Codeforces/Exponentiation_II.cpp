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
ll Power(ll a, ll b, ll m = mod)
{
    ll res = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll temp = Power(b, c, mod - 1); // exponent reduced modulo (mod-1)
    cout << Power(a, temp) << "\n";
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