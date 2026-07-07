class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        vector<int> subset;
        int sum = 0;
        backtrack(nums,0,sum,target,subset,result);
        return result;
    }

    void backtrack(vector<int>& nums, int i, int sum, int target, vector<int>& subset, vector<vector<int>>& result)
    {
        if(i==nums.size() && sum==target)
        {
            result.push_back(subset);
        }
        else if(i==nums.size() && sum!=target)
        {
            return;
        }
        else if(sum==target)
        {
            result.push_back(subset);
            return;
        }
        else if(i>nums.size() || sum>target)
        {
            return;
        }
        else{
            subset.push_back(nums[i]);
            backtrack(nums,i,sum+nums[i],target,subset, result);
            subset.pop_back();
            backtrack(nums,i+1,sum,target,subset,result);
        }
        

    } 
};
