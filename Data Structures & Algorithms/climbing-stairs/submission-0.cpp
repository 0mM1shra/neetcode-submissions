class Solution {
public:
    int dpf(int i,int n,vector<int>&dp){
        if(i==0) return 1;
        if(dp[i]) return dp[i];
        if(i>1) return dp[i]=dpf(i-1,n,dp)+dpf(i-2,n,dp);
        return dp[i]=dpf(i-1,n,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        dpf(n,n,dp);
        return dp[n];
    }
};
