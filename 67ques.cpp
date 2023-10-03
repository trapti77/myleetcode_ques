class Solution {
public:
bool isVowel(char ch)
{
    
    if(ch=='o'||ch=='i'||ch=='e'||ch=='u'||ch=='a'||ch=='A'||ch=='O'||ch=='I'||ch=='E'||ch=='U')
    return true;
    return false;
}
string sortVowels(string s) {
        string  str=s;
        vector<int>v;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                v.push_back((int)s[i]);
            }
        }
            if(v.size()==0)return s;
            sort(v.begin(),v.end());
         int j=0;
         for(int i=0;i<str.size();i++)
         {
             if(isVowel(str[i]))
             {
                 str[i]=(char)v[j];
                 j++;
             }
         } 
         return str;
    }
};
