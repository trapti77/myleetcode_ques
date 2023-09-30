class Solution {
public:
static bool cmp(string &s1,string &s2)
{
    return s1.length()<s2.length();
}
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        unordered_map<string,int>ump;
        int ans=0;
        for(string s:words)
        {
            int l=0;
            for(int i=0;i<s.length();i++)
            {
            string sub=s;
            sub.erase(i,1);
            l=max(l,ump[sub]+1);
            }
            ump[s]=l;
            ans=max(ans,l);
        }
        return ans;
    }
};
