class Solution {
public:
 int sq(int n)
{
    return n*n;
}
    bool isHappy(int n) {
      
    if(n==1) return true;
    if(n==4)return false;
    int rem=0;
while(n>0)
{
int d=n%10;
rem+=sq(d);
n=n/10;
}
return isHappy(rem); 
    }
};
