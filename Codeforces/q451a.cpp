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
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int m1 = *max_element(a.begin(), a.end());
    int m2 = *max_element(b.begin(), b.end());
    cout << 2 * (m1 + m2) << endl;
}

int main()
{
    FAST_IO;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}