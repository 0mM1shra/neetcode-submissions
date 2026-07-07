class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1;
        bool flag=true;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;continue;
            }
            else if(!isalnum(s[r])){
                r--;continue;
            }
            if(tolower(s[l])!=tolower(s[r])){
                flag=false;break;
            }
            l++;r--;
        }
        return flag;
    }
};
