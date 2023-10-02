class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }
        int ma;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
          int dif=0;
          dif=nums[i+1]-nums[i];
          if(dif>ma)
          {
              ma=dif;
          }
        }
    return ma;
    }
};
