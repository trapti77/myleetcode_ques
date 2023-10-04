class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
           
        }
        for(auto e:m)
        {
            if(e.second==1)
            {
                return e.first;
            }
        }
        
      return -1;
    }
};
