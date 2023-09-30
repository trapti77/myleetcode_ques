class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
       int m=nums2.size();
     vector<int>ans;
     for(int i=0;i<n;i++)
     {
         ans.push_back(nums1[i]);
     }
     for(int j=0;j<m;j++)
     {
         ans.push_back(nums2[j]);
     }
     sort(ans.begin(),ans.end());
     int size=m+n;
     if(size%2==1)
     {
          return static_cast<double>(ans[size/2]);
        
     }
     else{
          int e1=ans[size/2-1];
         int e2=ans[size/2];
         return (static_cast<double>(e1)+static_cast<double>(e2))/2.0;
     }
       
    }
};
