/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 *
 * [1005] K 次取反后最大化的数组和
 */

// @lc code=start
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < 0 && k > 0) {
                nums[i] = -nums[i];
                --k;
            }
            res += nums[i];
        }
        if (k % 2 == 1) {
            int min = INT_MAX;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] < min) min = nums[i];
            }
            res -= 2 * min;
        }
        return res;
    }
};
// @lc code=end

