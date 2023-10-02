class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0)
        {
            columnNumber=columnNumber-1;
            char cc='A'+columnNumber%26;
            ans+=cc;
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
