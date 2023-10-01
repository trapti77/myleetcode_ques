class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0;
        int e=arr.size()-1;
    while(s<=e)
      {
          int m=(e+s)/2;
          int mis=arr[m]-(m+1);
          if(mis<k)
          {
               s=m+1;
          }
          else
          {
              e=m-1;
          }
      }
return e+k+1; 
      
    }
};
