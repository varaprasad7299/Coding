/*You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed.
All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. 
Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int ans1,ans2;
        if(nums.size()<2) return nums[0];
        if(nums.size()<3) return max(nums[0],nums[1]);
        if(nums.size()<4) return max(nums[0],max(nums[1],nums[2]));
        int dp0=nums[0];
        int dp1=max(nums[0],nums[1]);
        int dp2;
        for(int i=2;i<nums.size()-1;i++){
            dp2 = max(dp0+nums[i],dp1);
             dp0=dp1;
            dp1=dp2;
           
        }
        ans1 = dp2;
        dp0=nums[1];
        dp1=max(nums[1],nums[2]);
        for(int i=3;i<nums.size();i++){
            dp2 = max(dp0+nums[i],dp1);
            dp0=dp1;
            dp1=dp2;
            
        }
        ans2=dp2;
        return max(ans1,ans2);
    }
};
