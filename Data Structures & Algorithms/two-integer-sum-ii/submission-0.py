class Solution:
    def twoSum(self, s: List[int], target: int) -> List[int]:
        n=len(s)
        l=0
        r=n-1
        sum=0
        while l<r:
            sum=s[l]+s[r]
            if sum==target:
                st=[l+1,r+1]
                return st
            elif sum>target:
                r-=1
            elif sum<target:
                l+=1


