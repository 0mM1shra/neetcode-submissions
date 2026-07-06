class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>m;
        bool flag=true;
        for(char c:s) m[c]++;
        for(char c:t) m[c]--;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second!=0){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
