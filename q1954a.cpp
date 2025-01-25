#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ans = (n + m - 1) / m;
    cout << ((ans+k>=n) ? "NO" : "YES") << endl;
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
