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
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    int cnt = 0;
    while (n)
    {
        cnt += n % k;
        n /= k;
    }
    cout << cnt << endl;
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