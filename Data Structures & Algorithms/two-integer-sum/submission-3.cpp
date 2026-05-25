class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> chk;
        int size = nums.size();

        for(int i=0;i<size;i++)
        {
            int diff = target-nums[i];

            if(chk.contains(diff))
            {
                vector<int> temp;
                temp.push_back(min(i,chk[diff]));
                temp.push_back(max(i,chk[diff]));
                return temp;
            }
            chk[nums[i]] = i;
        }
        return {};
    }
    
};
