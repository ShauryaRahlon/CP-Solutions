#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define all(a) a.begin(), a.end()
#define loop(i, n) for (int i = 0; i < n; i++)
#define rloop(i, m, n) for (int i = n; i >= m; i--)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
const int mod=1e9+7;
int factorial(int n)
{
    int fact=1;
    for (int i = 1; i <=n ; ++i)
    {
        fact*=i;
    }
    return fact;
}
void solve()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do
    {
        ans.pb(s);
    } while(next_permutation(s.begin(),s.end()));
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        cout<<ans[i]<<endl;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout); 
    #endif
    FAST_IO;
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}