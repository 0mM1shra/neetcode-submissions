class Solution {
public:
    int solve(vector<int>&nums,int l,int r){
        vector<int>dp(nums.size()+2,0);
        for(int i=r;i>=l;i--){
            dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
        }
        return dp[l];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>dp(n+2,0);
        return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
};
