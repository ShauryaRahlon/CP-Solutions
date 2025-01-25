#include <bits/stdc++.h>
#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll odd_count = (n + 1) / 2;

    if (k <= odd_count)
    {
        cout << (2 * k - 1) << endl;
    }
    else
    {

        cout << (2 * (k - odd_count)) << endl;
    }
}

int main()
{
    FAST_IO;
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}