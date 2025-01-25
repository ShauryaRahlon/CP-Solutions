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
    cin >> s;
    sort(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            ans++;
        }
    }
    cout << s[ans];
    for (int i = ans + 1; i < s.length(); i++)
    {
        cout << "+" << s[i];
    }
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