class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int l=i+1,h=n-1;
            while(l<h)
            {
                int curr=nums[i]+nums[l]+nums[h];
                if(curr==0)
                {
                 v.push_back({nums[i],nums[l],nums[h]});
                 while(l<h&&nums[l]==nums[l+1])l++;
                 while(h>l&&nums[h]==nums[h-1])h--;
                 l++;
                 h--;
                 
                }
                else if(curr<0)
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
            while(i+1<n&&nums[i]==nums[i+1])i++;
        }
        return v;
         
    }
};
