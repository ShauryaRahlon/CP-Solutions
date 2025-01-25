#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    set<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        ans.insert(s[i]);
    }
    if (ans.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
        return;
    }
    cout << "IGNORE HIM!" << endl;
}
int main()
{
    FAST_IO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}