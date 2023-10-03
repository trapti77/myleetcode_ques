class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        set<int>s1;
        vector<int>v1;
        vector<int>v2;
        for(auto i:nums1)
        {
            s.insert(i);
        }
        for(auto j:nums2)
        {
            s1.insert(j);
        }
         for(auto e:s)
        {
            v1.push_back(e);
        }
        for(auto e1:s1)
        {
            v2.push_back(e1);
        }
        vector<int>ans;
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
            if(v1[i]==v2[j])
            {
              ans.push_back(v1[i]);       
            }
            continue;
            }
        }
        return ans;

    }
};
