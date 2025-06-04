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

int solve(vi &nums, int i, int prev) {
    if (i >= nums.size())
        return 0;
    
    int ans = 0;//this is check
    
    if (nums[i] == 0) {
        ans =1+ solve(nums, i + 1, 0);
    }
    else if (nums[i] == 1) {
        if (prev == 1) {
            ans = 1 + solve(nums, i + 1, 0);
        } else {
            ans = solve(nums, i + 1, 1);
        }
    }
    else if (nums[i] == 2) {
        if (prev == 2) {
            ans = 1 + solve(nums, i + 1, 0);
        } else {
            ans = solve(nums, i + 1, 2);
        }
    }
    else { //3
        if (prev == 1) {
            ans = solve(nums, i + 1, 2);
        }
        else if (prev == 2) {
            ans = solve(nums, i + 1, 1);
        }
        else {
            int option1 = solve(nums, i + 1, 1); 
            int option2 = solve(nums, i + 1, 2); 
            int option3 = 1 + solve(nums, i + 1, 0); 
            ans = min({option1, option2, option3});
        }
    }
    
    return ans;
}
int solveMem(vi &nums,int i,int prev,vector<vector<int>>&dp)
{
    if (i >= nums.size())
        return 0;
    if(dp[i][prev]!=-1)
        return dp[i][prev];
    int ans = 0;
    
    if (nums[i] == 0) {
        ans =1+ solveMem(nums, i + 1, 0,dp);
    }
    else if (nums[i] == 1) {
        if (prev == 1) {
            ans = 1 + solveMem(nums, i + 1, 0,dp);
        } else {
            ans = solveMem(nums, i + 1, 1,dp);
        }
    }
    else if (nums[i] == 2) {
        if (prev == 2) {
            ans = 1 + solveMem(nums, i + 1, 0,dp);
        } else {
            ans = solveMem(nums, i + 1, 2,dp);
        }
    }
    else { //3
        if (prev == 1) {
            ans = solveMem(nums, i + 1, 2,dp);
        }
        else if (prev == 2) {
            ans = solveMem(nums, i + 1, 1,dp);
        }
        else {
            int option1 = solveMem(nums, i + 1, 1,dp); 
            int option2 = solveMem(nums, i + 1, 2,dp); 
            int option3 = 1 + solveMem(nums, i + 1, 0,dp); 
            ans = min({option1, option2, option3});
        }
    }
    dp[i][prev]=ans;
    return dp[i][prev];
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout); 
    #endif
    FAST_IO;
    
    int n;
    cin >> n;
    vi a(n);
    read(a);
    vector<vector<int>>dp(n,vector<int>(4,-1));
    // cout << solve(a, 0, 0) << endl;
    cout<<solveMem(a,0,0,dp);    
    return 0;
}