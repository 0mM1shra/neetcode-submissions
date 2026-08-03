class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=nums[0];
        int mn=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                int temp=mx;
                mx=mn;
                mn=temp;
            }
            mx=max(nums[i],mx*nums[i]);
            mn=min(nums[i],mn*nums[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
};
