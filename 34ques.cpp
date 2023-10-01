class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        int x=0;
        int y=0;
        int penalty=0;
        for(int i=0;i<n;i++)
        {
         if(customers[i]=='Y')
         {
             x++;
         }
        }
        y=x;
        for(int i=1;i<=n;i++)
        {
            if(customers[i-1]=='Y')
            {
                x--;
            }
            else
            {
                x++;
            }
            if(x<y)
            {
                y=x;
                penalty=i;
            }
        }
         
      
       return penalty;
    }
};
