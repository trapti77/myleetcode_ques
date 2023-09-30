class Solution {
public:

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
    
      for(int i=left;i<=right;i++)
        {
        int rem=0;
    int num=i;
    int flag=false;
         while(num>0)
         {
         rem=num%10;
         if(rem!=0&&i%rem==0)
         {
         flag=true;
         }
         else {
             flag= false;
             break;
         }
          num=num/10;
         }
          if(flag)
          {
              ans.push_back(i);
          }
         
          
        }
        return ans;
    }
};
