class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
            if(grid[i][j]<0)
            {
                c++;
            }
            }
        }
        return c;
    }
};
