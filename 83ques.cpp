class Solution {
public:
    void sortColors(vector<int>& nums) {
       //sort(nums.begin(),nums.end());
        vector<int>ans;
        int f=0,s=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                f++;
            }
            else if(nums[i]==1)
            {
                s++;
            }
            else
            {
                t++;
            }
        }
       for(int i=0;i<f;i++)
       {
     nums[i]=0;
       }
    for(int i=f;i<f+s;i++)
       {
     nums[i]=1;
       }
   for(int i=f+s;i<f+s+t;i++)
       {
   nums[i]=2;
       }

       
    }
};
