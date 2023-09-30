class Solution {
public:
    void sets(int i,vector<int>&nums,vector<int>v,vector<vector<int>>&ans)
    {
        if(i==nums.size()) return ;
        v.push_back(nums[i]);
        ans.push_back(v);
        for(int k=i+1;k<nums.size();k++)
        {
            sets(k,nums,v,ans);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        ans.push_back(v);
        for(int i=0;i<nums.size();i++)
        {
            sets(i,nums,v,ans);
        }
        return ans;
    }
};
