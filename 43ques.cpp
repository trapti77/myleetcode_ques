/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
int number(int s,int e)
{
    int m=s+(e-s)/2;
    while(s<=e)
    {
    if(guess(m)==0)
    {
        return m;
    }
    if(guess(m)==1)
    {
        s=m+1;
    }
    else
    {
        e=m-1;
    }
    return number(s,e);
    }
    return m;
}
    int guessNumber(int n) {
      int ans=number(1,n);
      return ans;
    }
};
