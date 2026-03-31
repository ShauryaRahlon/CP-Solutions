#include<bits/stdc++.h>
/*------------------------- Type Defs ----------------------*/
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

/*------------------------- Macros -------------------------*/
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define all(a) a.begin(), a.end()
#define loop(x, start, end) for (ll x = start; x < end; x++)
#define rloop(i, m, n) for (int i = n; i >= m; i--)
#define read(x) loop(i,0,x.size()) cin>>x[i];
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define p(x) cout<<x<<endl
#define p2(arr) loop(i,0,arr.size()) cout<<arr[i]<<" "; cout<<endl
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cerr.tie(nullptr)

/*------------------------- Maths --------------------------*/
const int MOD=1e9+7;
template <typename T> inline T gcd(T a, T b){T c;while (b){c = b;b = a % b;a = c;}return a;}
template <typename T> inline T lcm(T a, T b){return a / gcd(a,b) * b;}
template <typename T> inline bool isPrime(T n){for (T i=2;i*i<=n;i++) if(n%i==0) return false; return true;}
template <typename T> inline T Power_MOD(T a,T b){T res=1;while(b>0){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b>>=1;}return res;}
template <typename T> inline T Power(T a,T b){long long res=1;while(b>0){if(b&1){res=res*a;}a*=a;b>>=1;}return res;}



using namespace std;
vector<int>m3(vector<int>&a)
{
    vector<pair<int,int>>pq(a.size());//element idx
    for(int i=0;i<a.size();++i)
    {
        pq[i].first=a[i];
        pq[i].second=i;
    }
    sort(pq.rbegin(),pq.rend());
    vi ans(3);
    for(int i=0;i<3;++i)
        ans[i]=pq[i].second;
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    vi b(n);
    vi c(n);
    read(a);
    read(b);
    read(c);
    
    
    vi ma=m3(a);
    vi mb=m3(b);
    vi mc=m3(c);
    int ans=0;
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            for(int k=0;k<3;++k)
            {
                int x=ma[i];
                int y=mb[j];
                int z=mc[k];
                if(x==y or x==z or y==z)
                    continue;
                ans=max(ans,a[x]+b[y]+c[z]);
            }
    p(ans);
            
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    
    clock_t T = clock();
    FAST_IO;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    #ifndef ONLINE_JUDGE
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
    #endif
}