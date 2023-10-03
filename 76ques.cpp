class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>ss;
        for(int i=0;i<s.size();i++)
        {
            ss.insert(s[i]);
        }
        string str;
        for(auto e:ss)
        {
            str.push_back(e);
        }
        return str.size();
    }
};
