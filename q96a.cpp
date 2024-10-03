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
    int n = s.length();
    int cnt0 = 0, ans1 = 0, ans2 = 0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
            ans1 = max(ans1, cnt0);
            cnt1 = 0;
        }
        else
        {
            cnt1++;
            ans2 = max(ans2, cnt1);
            cnt0 = 0;
        }
    }
    cout << (max(ans1, ans2) >= 7 ? "YES" : "NO") << endl;
    return;
}

int main()
{
    FAST_IO;
    int t = 1; // Number of test cases
    // cin >> t; // Uncomment this line to read multiple test cases
    while (t--)
    {
        solve();
    }
}
