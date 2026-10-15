class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        map = {} 

        for i, num in enumerate(nums):

            map[num] = i

        
        for key, value in enumerate(nums):
            
            diff = target-value
            if diff in map and map[diff]!=key:
                return[key,map[diff ]]
            else:
                continue
        
        return []
            

        