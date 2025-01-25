#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(n==2)
    {
        cout<<"AA"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(i==n/2)
        cout<<"B";
        else
        cout<<"A";
    }
    cout<<"\n";
    
}
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}