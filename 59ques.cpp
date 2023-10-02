class Solution {
public:
  bool static cmp(pair<char,int>&a,pair<char,int>&b)
  {
    return a.second>b.second;
  }
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<char,int>>v;
        for(auto e:m)
        {
            v.push_back({e.first,e.second});
        }
        sort(v.begin(),v.end(),cmp);
        string st;
        for(auto e:v)
        {
          for(int i=0;i<e.second;i++)
          {
              st+=e.first;
          }
        }
        return st;
    }
};
