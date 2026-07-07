class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            vector<int>v={l+1,r+1};
            if(sum==target) return v;
            else if(sum<target) l++;
            else r--;
        }
    }
};
