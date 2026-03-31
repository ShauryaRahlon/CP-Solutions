#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

map<long long, int> memo;
long long target_k;

int solve(long long n)
{

    if (n == target_k)
        return 0;

    // Base Case 2: Pile is smaller than target, impossible to reach K from here
    if (n < target_k)
        return 1e9; // Return a large "infinity" value

    // Check Memoization Table
    if (memo.count(n))
        return memo[n];

    // Recursive Step: Split into floor(n/2) and ceil(n/2)
    // The cost is 1 (for the current split) + min steps required by either sub-pile
    long long left = n / 2;
    long long right = (n + 1) / 2;

    int steps = 1 + min(solve(left), solve(right));

    // Store and return result
    return memo[n] = steps;
}

void run_test_case()
{
    long long n;
    cin >> n >> target_k;

    memo.clear();

    if (target_k > n)
    {
        cout << -1 << endl;
        return;
    }

    int result = solve(n);

    if (result >= 1e9)
        cout << -1 << endl;
    else
        cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        run_test_case();
    return 0;
}