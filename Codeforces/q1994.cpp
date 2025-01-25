#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] != 0)
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    FAST_IO;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}