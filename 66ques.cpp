class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
       int c=0;
       while(t--)
       {
       num=num-1;
       c++;
       num=num+1;
       c++;
       }
       return num+c; 
    }
};
