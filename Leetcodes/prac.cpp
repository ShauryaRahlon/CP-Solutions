#include <bits/stdc++.h>
using namespace std;
int countInRange(vector<int> &arr, int num, int left, int right)
{
    int cnt = 0;
    for (int i = left; i <= right; ++i)
    {
        if (arr[i] == num)
            cnt++;
    }
    return cnt;
}
int majorityElement(vector<int> &arr, int l, int r)
{
    int mid = l + (r - l) / 2;
    int lmajority = majorityElement(arr, l, mid);
    int rmajority = majorityElement(arr, mid + 1, r);
    if (lmajority == rmajority)
        return lmajority;
    int lc = countInRange(arr, lmajority, l, r);
    int rc = countInRange(arr, rmajority, l, r);
    return lc > rc ? lmajority : rmajority;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int majority = majorityElement(a, 0, n - 1);
    int cnt = countInRange(a, majority, 0, n - 1);
    cout << cnt << endl;
}