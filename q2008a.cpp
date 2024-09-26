#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
        if (a % 2)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a == 0)
    {
        if (b % 2)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (((a) + b * 2) % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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