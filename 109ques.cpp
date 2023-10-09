class Solution {
public:
    string toLowerCase(string s) {
      //1.transform(s.begin(),s.end(),s.begin(),::tolower);
      //2. 2nd method
      for(int i=0;i<s.size();i++)
      {
        if(s[i]>=65&&s[i]<=90)
        {
          s[i]=s[i]+32;
        }
      }
      
      return s;
    }
};
