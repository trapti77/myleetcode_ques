class Solution {
public:
   vector<int> merge(vector<int>&nums1,vector<int>&nums2)
   {
     vector<int>ans;
     for(int i=0;i<nums1.size();i++)
     {
        ans.push_back(nums1[i]);
     }
     for(int i=0;i<nums2.size();i++)
     {
        ans.push_back(nums2[i]);
     }
  sort(ans.begin(),ans.end());
     return ans; 
   }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        v=merge(nums1,nums2);
        int n=v.size();
        int mid=(n-1)/2;
        if(n%2==0)
        {
        
          return double(v[mid]+v[mid+1])/2;
          
        }
        return v[mid];
    }
};
