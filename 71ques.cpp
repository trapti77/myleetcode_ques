class Solution {
public:
    int calculate(string s) {
        //solution without using  recursion
        int n=s.size();
        int sum=0;
        int sign=1;
        int num=0;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                num=s[i]-'0';
                 while(i+1<n &&isdigit(s[i+1]))
                {
                  num=num*10+(s[i+1]-'0');
                  i++;
                }
                sum+=num*sign;
            }
            else if(s[i]=='+')
            {
             sign=1;
            }
             else if(s[i]=='-')
             {
              sign=-1;
             }
            else if(s[i]=='(')
            {  
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }
           else  if(s[i]==')')
            {
                sum=st.top()*sum;
                st.pop();
                sum+=st.top();
                st.pop();
            }   
            
        }
        return sum;
    }
};
