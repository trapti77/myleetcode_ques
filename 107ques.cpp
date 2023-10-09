class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="*"||tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/")
            {
                int op2=st.top();st.pop();
                int op1=st.top();st.pop();
                if(tokens[i]=="*")
                {
                    st.push(op1*op2);
                }
                if(tokens[i]=="+")
                {
                    st.push(op1+op2);
                }
                if(tokens[i]=="-")
                {
                    st.push(op1-op2);
                }
                if(tokens[i]=="/")
                {
                    st.push(op1/op2);
                }
            }
            else
            {
                stringstream ss(tokens[i]);
                int data;
                ss>>data;
                st.push(data);
            }
        }
        return st.top();
    }
};
