class Solution {
public:

    char findTheDifference(string s, string t) {
      /* sort(s.begin(),s.end());
       sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++)
        {
          if(s[i]==t[i])
          {
              continue;
          } 
        }
       return t[s.size()];
    }*/
    int sum1=0;
  int  sum2=0;
    for(int i=0;i<s.size();i++)
    {
sum1+=s[i];
    }
    for(int i=0;i<t.size();i++)
    {
sum2+=t[i];
    }
   int sum=sum2-sum1;
   return sum;//extra letter ascii
    }
};
