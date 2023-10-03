class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int c=0;
        
        for(int i=left;i<=right;i++)
        {
            int n=words[i].size();
           
            if((words[i][0]=='o'||words[i][0]=='i'||words[i][0]=='e'||words[i][0]=='a'||words[i][0]=='u')&&(words[i][n-1]=='o'||words[i][n-1]=='i'||words[i][n-1]=='e'||words[i][n-1]=='a'||words[i][n-1]=='u'))
            {
              
               c++;
            }
            
           
        }
        return c;
    }
};
