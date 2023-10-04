class Solution {
public:
 int maxArea(vector<int>& height) {
  int ma=0;
  int s=0;
  int e=height.size()-1;
  
 while(s<e)
 {
     int dif=e-s;
        int mi=min(height[s],height[e]);
        
        ma=max(ma,(mi*dif));
        if(height[s]<height[e])
        {
            s++;
        }
        else{
            e--;
        }
    }
    return ma;
    }
};
