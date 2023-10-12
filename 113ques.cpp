class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
       int n = nums.size();
    int idx=-1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i]<target)
        {
            idx=i;
        }
        else if(nums[i]<target&&target<nums[i+1])
        {
            return i+1;
        }

    }
    return idx+1;
    }
};
