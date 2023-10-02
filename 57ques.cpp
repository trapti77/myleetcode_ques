class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        
        int n=nums.size();
       /* int i=0;
        int j=n-1;
        while(i<j)
        {
            if(abs(i-j)<=indexDiff && abs(nums[i]-nums[j])<=valueDiff)
            {
                return true;
                break;
            }
            if(abs(i-j)>indexDiff)
            {
                sort(nums.begin(),nums.end());
               j--;
            }
            else
            {
            i++;
            }
            }
            */
           for(int i=0;i<n;i++)
           {
               for(int j=i+1;j<n;j++)
               {
                   if((j-i)>indexDiff)break;
                   if(abs(nums[i]-nums[j])<=valueDiff)
                   {
                       if(j-i<=indexDiff)return true;
                   }
               }
           } 
        
        return false;
    }
};
