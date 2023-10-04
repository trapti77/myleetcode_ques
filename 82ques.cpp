class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       bool flag=false;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
            return true;
            }
        }
       
        return flag;
    }
};
