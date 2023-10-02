// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1)
        {
            return n;
        }
       int s=1;
       int e=n;
       while(s<e)
       {
           int m=s+(e-s)/2;
           if(isBadVersion(m))
           {
               e=m;
           }
           else
           {
               s=m+1;
           }
       }
       return s;
    }
};
