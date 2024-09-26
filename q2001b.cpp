#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{

    int n;
    cin >> n;
    int ans = 0;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.pb(s);
        if (s[0] == '+' || s[1] == '+')
        {
            ans++;
        }
        else
            ans--;
    }
    cout << ans << endl;
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