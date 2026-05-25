class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, int> m1;

        for(int i=0;i<nums.size();i++)
        {
            if(m1.count(nums[i]))
            {
                vector<int> temp = {m1[nums[i]],i};
                return temp;
            }
            int diff = target - nums[i];
            m1[diff] = i;
        }
        return {-1,-1};
    }
};
