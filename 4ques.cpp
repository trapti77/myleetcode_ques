class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size=0;
        int i=0;
        for( i=0;i<s.length();i++)
        {
          if(isdigit(s[i]))
          {
              size*=s[i]-'0';
          }
          else{
              size++;
          }
        }    
       for(int j=i-1;j>=0;j--)
       {
          if(isdigit(s[j]))
          {
              size/=s[j]-'0';
              k%=size;
          }
           else{
               if(k==0||k==size)
               {
                   return std::string(1,s[j]);
               }
               size--;
           }
       } 
       return " ";
    }
};
