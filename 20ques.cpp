class Solution {
public:
    int splitNum(int num) {
        int even=0;
        int odd=0;
        vector<int>ans;
        while(num>0){
            int rem=num%10;
             ans.push_back(rem);
            num=num/10;
           
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
        if(i%2==0)
            {
             even=even*10+ans[i];
            }
            else
            {
                odd=odd*10+ans[i];
            }
        }
        int sum=even+odd;
        return sum;
    }
};
