#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    string s;
    int n;
    cin >> n >> s;
    int ans = 1;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt = 1;
        else
            cnt++;
        ans = max(ans, cnt);
    }
    cout << ans + 1 << endl;
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