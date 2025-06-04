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

int solve(int n, int a, int b, int c) {
    if (n == 0) return 0; // exact cut
    if (n < 0) return INT_MIN; // invalid cut
    
    int ca = solve(n - a, a, b, c);
    int cb = solve(n - b, a, b, c);
    int cc = solve(n - c, a, b, c);

    int res = max({ca, cb, cc});
    
    if (res == INT_MIN) return INT_MIN; // no valid cuts
    return res + 1; // one valid cut added
}
int solveMemo(int n, int a, int b, int c, vector<int>& dp) {
    if (n == 0) return 0;         // Perfectly cut
    if (n < 0) return INT_MIN;    // Invalid cut
    if (dp[n] != -1) return dp[n]; // Already computed

    int ca = solveMemo(n - a, a, b, c, dp);
    int cb = solveMemo(n - b, a, b, c, dp);
    int cc = solveMemo(n - c, a, b, c, dp);

    int res = max({ca, cb, cc});
    if (res == INT_MIN) return dp[n] = INT_MIN;

    return dp[n] = res + 1;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout); 
    #endif
    FAST_IO;

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);
    int ans = solveMemo(n, a, b, c, dp);
    
    cout<<(ans < 0 ? 0 : ans);
}
