class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> chk;

        int size = nums.size();

        for(int i=0;i<size;i++)
        {
            chk[nums[i]] += 1;
            int val = chk[nums[i]];
            if( val > 1)
            {
                return true;
            }

        }
        return false;
    }
};