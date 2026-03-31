#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

// Use const reference because we don't modify the string
void generateStrings(const string &s)
{
    if (s.empty())
        return;
    if (st.count(s))
        return;

    st.insert(s);

    string s1 = s.substr(1);
    generateStrings(s1);

    if (s.size() > 1)
    {
        string t = s[0] + s.substr(2);
        generateStrings(t);
    }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    st.clear();
    generateStrings(s);

    cout << st.size() << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
