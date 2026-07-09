class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        mp = {} 

        for index, value in enumerate(nums):
            mp[value] = index

        for index, value in enumerate(nums):

            temp = target - value
            if(temp in mp and mp[temp]!=index):
                return [index,mp[temp]]
        
        return []

