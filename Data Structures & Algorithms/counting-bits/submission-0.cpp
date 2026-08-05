class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1,0);
        for(int i=0;i<=n;i++){
            int j=i;
            while(j){
                if(j&1) res[i]++;
                j>>=1;
            }
        }
        return res;
    }
};
