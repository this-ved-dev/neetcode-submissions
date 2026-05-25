class Solution {
public:
    
    int b_search(int start, int end, vector<int>& box, int target)
    {
        if(start>end)
        {
            return -1; 
        }
        int middle = start+((end-start)/2);
        if(box[middle]==target)return middle;
        return ((box[middle]<target)?
                b_search(middle+1, end, box, target):
                b_search(start, middle-1, box, target));
    }
    int search(vector<int>& nums, int target) {
        
        return b_search(0, nums.size()-1, nums, target);
        
    }
    
};
