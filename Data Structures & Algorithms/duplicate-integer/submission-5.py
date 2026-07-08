class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        
        mp = {} 

        for i in nums:
            if i not in mp:
                mp[i] = 0
            mp[i] += 1
            if(mp[i]>1):
                return True

        return False
