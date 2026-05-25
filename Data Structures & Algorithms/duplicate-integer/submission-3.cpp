class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> hmap;

        for(int i=0;i<nums.size();i++)
        {
            hmap[nums[i]] += 1;
            if(hmap[nums[i]]>1)
            {
                printf("%i",hmap[nums[i]]);
                return true;
            }
        }
        return false;
    }
};