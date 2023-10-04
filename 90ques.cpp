class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map<int,int>m;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           m[nums[i]]++;
           if(m[nums[i]]>1)
           {
               return nums[i];
           }
       }
       return -1;
    }
};
