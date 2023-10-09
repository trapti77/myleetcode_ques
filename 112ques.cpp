class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(int i=0;i<stones.size();i++)
   {
    for(int k=0;k<jewels.size();k++)
    {
if(stones[i]==jewels[k])
{
    c++;
}
    }
   }
   return c;
    }
};
