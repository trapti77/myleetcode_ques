class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured==0)
        {
            return 0;
        }
        vector<double>list(1,poured);
        for(int i=0;i<query_row;i++)
        {
            vector<double>temp(i+2,0);
            for(int j=0;j<=i;j++)
            {
               if(list[j]<=1) 
               {
                   continue;
               }
               double ex=(list[j]-1)/2.0;
               temp[j]+=ex;
               temp[j+1]+=ex;
            }
            list=temp;
        }
        return min(1.0,list[query_glass]);
    }
};
