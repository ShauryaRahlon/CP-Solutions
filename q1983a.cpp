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
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
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