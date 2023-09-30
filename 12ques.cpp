class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag=false;
        int j=0;
        for(int i=0;i<t.length();i++)
        {
          if(t[i]==s[j])
          {
              flag=true;
               j++;
          }
          flag=false;
         
        }
        if(j==s.size())
        {
            return true;
        }
        return flag;
    }
};
