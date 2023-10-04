class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--)
        {
           if(s[i]==' '&& flag==true)
            {
            break;
            }
            else if(s[i]!=' ')
            {
                flag=true;
                c++;
            }
        }
        return c;
    }
};
