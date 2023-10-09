class Solution {
public:

    string restoreString(string s, vector<int>& indices) {
        string st=s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            s[indices[i]]=st[i];
        }
        return s;
    }
};
