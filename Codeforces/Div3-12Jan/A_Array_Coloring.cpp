#include <bits/stdc++.h>
using namespace std;

/*------------------------- Type Defs ----------------------*/
typedef long long ll;

/*------------------------- Macros -------------------------*/
#define vi vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define read(x)       \
    for (auto &i : x) \
    cin >> i
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

/*------------------------- Solve --------------------------*/
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    read(a);

    vi pos(n + 1);
    loop(i, 0, n)
        pos[a[i]] = i;

    for (int x = 1; x < n; x++)
    {
        if ((abs(pos[x] - pos[x + 1]) % 2) == 0)
        {
            no;
            return;
        }
    }
    yes;
}

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
        solve();
}
// new
