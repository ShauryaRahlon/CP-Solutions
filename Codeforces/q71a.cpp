#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    // int n;
    // cin >> n;
    // while (n--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n <= 10)
        {
            cout << s << endl;
            return;
        }
        cout << s[0] << n - 2 << s[n - 1] << endl;
    }
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