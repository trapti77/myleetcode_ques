class Solution {
public:
    int firstUniqChar(string s) {
        
        
    int n=s.size();
    vector<int>arr(26);
    for(auto i:s)
    {
    arr[i-'a']++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;
    }
};
