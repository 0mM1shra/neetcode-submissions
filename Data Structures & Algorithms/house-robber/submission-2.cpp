class Solution {
public:
    // int solve(int i,vector<int>&nums,vector<int>&dp,int n){
    //     if(i>=n) return 0;
    //     if(dp[i]>=0) return dp[i];
    //     int take=nums[i]+solve(i+2,nums,dp,n);
    //     int skip=solve(i+1,nums,dp,n);
    //     return dp[i]=max(take,skip);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+2,0);
        // return solve(0,nums,dp,n);
        for(int i=n-1;i>=0;i--){
            dp[i]=max(dp[i+1],dp[i+2]+nums[i]);
        }
        return dp[0];
    }
};
