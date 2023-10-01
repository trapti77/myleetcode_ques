class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        int i=0;
        while(n>=0)
        {
            if(i%2==0)
            {
                ans[i]=ans[i/2];
            }
            else
            {
                ans[i]=ans[i/2]+1;
            }
            i++;
            n--;
        }
        return ans;
    }
};
