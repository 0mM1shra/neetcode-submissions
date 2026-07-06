class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>1) flag=true;
        }
        return flag;
    }
};