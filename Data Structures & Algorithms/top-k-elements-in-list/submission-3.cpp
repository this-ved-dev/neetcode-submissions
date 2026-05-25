class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        int size = nums.size();

        for(int i=0;i<size;i++)
        {
            mp[nums[i]] += 1;
        }
        vector<vector<int>> arr(size+1);
        for(auto it=mp.begin();it!=mp.end(); it++)
        {
            arr[(it->second)].push_back(it->first);
        }
        int count = 1;
        vector<int> k_arr;
        for(int i=size;i>0;i--)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                
                k_arr.push_back(arr[i][j]);
                if(k_arr.size()==k)
                {
                    return k_arr;
                }

            }
            

        }
        return k_arr;

    }
};