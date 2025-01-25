#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Replace "WUB" with a space
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        if (i <= s.length() - 3 && s.substr(i, 3) == "WUB")
        {
            if (result.size() > 0 && result[result.size() - 1] != ' ')
            {
                result += ' ';
            }
            i += 2;
        }
        else
        {
            result += s[i];
        }
    }


    cout << result << endl;

    return 0;
}
