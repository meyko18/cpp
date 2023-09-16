/*
 * @lc app=leetcode.cn id=908 lang=cpp
 *
 * [908] 最小差值 I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min = nums[0], max = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            if(nums[i] > max)
            {
                max = nums[i];
            }
        }
        int res = max - min - 2 * k;
        return res > 0 ? res : 0;

    }
};
// @lc code=end

