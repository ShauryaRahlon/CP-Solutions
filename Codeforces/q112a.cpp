#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
        {
            a[i] = a[i] + 32;
        }
        if (isupper(b[i]))
        {
            b[i] = b[i] + 32;
        }
    }
    {
        if (a == b)
        {
            cout << 0 << endl;
            return 0;
        }
        if (a < b)
        {

            cout << -1 << endl;
            return 0;
        }
        if (a > b)
        {
            cout << 1 << endl;
        }
    }
}