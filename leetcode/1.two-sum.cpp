/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0, j=0;
        vector <int> result [2];
        for(i=0;i<sizeof(nums); i++){
            for(j=i+1;j < sizeof(nums); j++){
                if(nums[j] == (target - nums[i])){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
};
// @lc code=end

