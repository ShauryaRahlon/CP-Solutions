class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        if (s.length() < k)
        {
            return false;
        }
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); ++i)
            m[s[i]]++;
        int cnto = 0;
        for (auto it : m)
        {
            if (it.second % 2)
                cnto++;
        }
        if (cnto > k)
            return false;
        return true;
    }
};