#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, h, l;
        cin >> n >> h >> l;

        int cntRow = 0, cntCol = 0, usable = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x <= h)
                cntRow++;
            if (x <= l)
                cntCol++;
            if (x <= h || x <= l)
                usable++;
        }

        int answer = min({cntRow, cntCol, usable / 2});
        cout << answer << "\n";
    }
    return 0;
}
