class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        /*for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
                c++;
            }

       
        int n1=(n/2);
        if(c>=n1)
        {
        return nums[i];
        }
        }
        return 0;*/
      int mid=n/2;
      return nums[mid];
    }
};
