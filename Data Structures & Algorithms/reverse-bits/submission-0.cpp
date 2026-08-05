class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int k=31;
        long long sum=0;
        while(k>=0){
            sum+=((n&1)<<k);
            k--;
            n>>=1;
        }
        return sum;
    }
};
