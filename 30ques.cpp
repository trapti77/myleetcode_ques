class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
    int last=nums[n-1];
    long long  count=0;
   vector<int>ans;
   for(int i=n-2;i>=0;--i)
   {
    if(nums[i]>last)
    {
    int c=nums[i]/last;
    if(nums[i]%last)c++;
    last=nums[i]/c;
    count+=c-1;
   }
   else{
    last=nums[i];
   }
   }
   return count;
    }
};
