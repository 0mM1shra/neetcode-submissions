class Solution {
public:
    int search(vector<int>& v, int target) {
        int l= lower_bound(v.begin(),v.end(),target)-v.begin();
        if(l<v.size() && v[l]==target) return l;
        else return -1;
    }
};
