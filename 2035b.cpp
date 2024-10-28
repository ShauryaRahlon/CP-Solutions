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
    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << 3;
        }
        cout << 66 << endl;
    }
    else
    {
        for (int i = 0; i < n - 5; i++)
        {
            cout << 3;
        }
        cout << 36366 << endl;
    }
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