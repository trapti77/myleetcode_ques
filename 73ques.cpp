class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==i)
           {
               continue;
           }
           else
           {
               return i;
           }
       }
       return nums.size(); 
    }
};
