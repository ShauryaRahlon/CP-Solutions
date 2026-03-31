#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << "\n";
        return;
    }

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int l = 0, r = 0;
    int ans = 0;
    int prev = -1;

    unordered_map<int, int> m;

    while (r < n)
    {
        int curr = nums[r];
        m[curr]++;

        while (m[curr] > 1)
        {
            m[nums[l]]--;
            l++;
        }

        if (r > 0 && curr <= nums[r - 1])
        {
            // reset window to start from r
            m.clear();
            l = r;
            m[curr] = 1;
        }

        ans = max(ans, r - l + 1);

        r++;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}