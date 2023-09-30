class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        /*int n=nums.size();
        if(n==2)
        {
            swap(nums[0],nums[1]);
        }
        
       int c=0;
    int c1=0;
    vector<int>ans;
    vector<int>aa;
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
        {
           ans.push_back(nums[i]);
        }
        else{
          aa.push_back(nums[i]);  
        }
    }
  for(int i=0;i<aa.size();i++)
  {
    ans.push_back(aa[i]);
  }
        return ans;*/
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0)
        {
            ans.push_back(nums[i]);
        }
    }
    for(int j=0;j<nums.size();j++)
    {
      if(nums[j]%2!=0)
      {
        ans.push_back(nums[j]);
      }
    }
    return ans;

    }
};
