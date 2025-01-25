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
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << a << " " << a * b << " " << a * (b + 1) << endl;
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