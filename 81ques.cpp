class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
         s.insert(nums[i]);
        }
        for(auto e:s)
        {
            v.push_back(e);
        }
        
        if(v.size()==1)
        {
            return v[0];
        }
         if(v.size()==2)
        {
            sort(v.begin(),v.end());
            return v[1];
        }
        if(v.size()>=3)
        {
           return v[v.size()-3];
        }
        return v[v.size()];
    }
};
