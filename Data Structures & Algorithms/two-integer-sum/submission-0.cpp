class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> id;
        int n=nums.size();
        for(int i=0;i<n;i++){
            id[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int dif=target-nums[i];
            if(id.count(dif) && id[dif]!=i){
                return {i,id[dif]};
            }
        }
        return {};
    }
};
