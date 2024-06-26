/*You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and
it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.*/



class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        if(nums.size()<3) return max(nums[0],nums[1]);
        vector<int>dp(nums.size());
        int dp0=nums[0];
        int dp1=max(nums[0],nums[1]);
        int dp2;
        for(int i=2;i<nums.size();i++){
            dp2= max(dp1,(dp0+nums[i]));
            dp0 = dp1;
            dp1 = dp2;

        }
        return dp2;
    }
};
