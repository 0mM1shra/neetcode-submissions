class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxp=0;
        for(int x:prices){
            minp=min(minp,x);
            maxp=max(maxp,x-minp);
        }
        return maxp;
    }
};
