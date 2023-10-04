class Solution {
public:
    long long int mySqrt(int x) {
       int s=0;
       int e=x;
       long long int m=(s+e)/2;
       long long int ans=-1;
       while(s<=e)
       {
        long long int sq=m*m;
        if(sq==x)
        {
            return m;
        }
        if(sq<x)
        {
            ans=m;
            s=m+1;
        }
        else
        {
            e=m-1;
        }
        m=(s+e)/2;
       }
       return ans;
    }
};
