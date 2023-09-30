class Solution {
public:
   /*char find(string s,string t)
   {
       char ch;
       if(s[0]==NULL&&t[0]==NULL)return NULL;
       if(s[0]==NULL&&t[0]!=NULL)return t[0];
       if(s[0]!=NULL&&t[0]==NULL)return s[0];
       for(int i=0;i<s.length();i++)
       {
           for(int j=0;j<t.length();j++)
           {
               if(s[i]==t[j])
               {
                   continue;
               }
               ch=t[j];
           }
       }
       return ch;
   }*/
    char findTheDifference(string s, string t) {
       int sum1=0;
       int sum2=0;
       for(auto i:s)
       {
           sum1+=i-'0';
       }
       for(auto j:t)
       {
           sum2+=j-'0';
       }
       int dif=abs(sum1-sum2)+'0';
       return dif;
    }
};
