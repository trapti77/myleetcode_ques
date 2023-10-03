class Solution {
public:
    int singleNumber(vector<int>& nums) {
       if(nums.size()==1)
        {
            return nums[0];
        }
        int num=0;
     map<int,int>m;
     for(auto i:nums)
     {
         m[i]++;
     }
     for(auto e:m)
     {
         if(e.second==1)
         num=e.first;
     }
    return num;    
    }
};
