#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

class Solution
{
public:
    vector<int> majorityThreshold(vector<int> &nums, vector<vector<int>> &queries)
    {
        unordered_map<int, vector<int>> pos;

        // Precompute positions of each number
        for (int i = 0; i < nums.size(); ++i)
        {
            pos[nums[i]].push_back(i);
        }

        vector<int> result;

        for (auto &q : queries)
        {
            int l = q[0], r = q[1], threshold = q[2];
            int answer = -1, maxFreq = 0;
            for (int t = 0; t < 20; ++t)
            {
                // int randIdx = uniform_int_distribution<int>(l, r)(rng);
                int val = nums[0];

                const auto &indices = pos[val];

                // Count how many times val appears in [l, r] using binary search
                int left = lower_bound(indices.begin(), indices.end(), l) - indices.begin();
                int right = upper_bound(indices.begin(), indices.end(), r) - indices.begin();
                int freq = right - left;

                if (freq >= threshold)
                {
                    if (freq > maxFreq || (freq == maxFreq && val < answer))
                    {
                        answer = val;
                        maxFreq = freq;
                    }
                }
            }

            result.push_back(answer);
        }

        return result;
    }
};

// -------- Main function to test --------

int main()
{
    Solution sol;

    vector<int> nums = {3, 2, 3, 2, 3, 2, 3};
    vector<vector<int>> queries = {
        {0, 6, 4}, // subarray: [1,1,2,2,1,1]
        {1, 5, 2}, // subarray: [1,1,2,2]
        {2, 4, 1},
        {3, 3, 1} // subarray: [2,2]
    };

    vector<int> result = sol.majorityThreshold(nums, queries);

    cout << "Output: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
