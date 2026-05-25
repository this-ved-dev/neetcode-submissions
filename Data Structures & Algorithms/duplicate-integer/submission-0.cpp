class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> m1;

        for(int i=0; i<nums.size(); i++)
        {
            m1[nums[i]] += 1;
            if(m1[nums[i]]>1)
            {
                return true;
            }
        }
        return false;

    }
};
