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
    int x, y, k;
    cin >> x >> y >> k;
    int ax, ay, bx, by, cx, cy, dx, dy;
    int ans = min(x, y);
    ax = 0;
    ay = 0;
    by = ans;
    bx = ans;
    cx = ans;
    cy = 0;
    dx = 0;
    dy = ans;
    cout << ax << " " << ay << " " << bx << " " << by << endl;
    cout << cx << " " << cy << " " << dx << " " << dy << endl;
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