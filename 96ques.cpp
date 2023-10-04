class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0;
        int c1=0;
        for(int i=0;i<nums.size();i++)
        {
          if(nums[i]<0)
          {
              c++;
          }
          if(nums[i]>0)
          {
              c1++;
          }
        }
        if(c>=c1)
        {
        return c;
        }
        else
        {
            return c1;
        }
    }
};
