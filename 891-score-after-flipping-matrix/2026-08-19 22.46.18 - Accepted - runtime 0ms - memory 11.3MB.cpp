class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        //making the elements of first column 1
        for(int i=0;i<r;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<c;j++)
                {
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        //flip column where no of zeros>no of ones
        for(int j=0;j<c;j++)
        {
            int noz=0,noo=0;
            for(int i=0;i<r;i++)
            {
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo)
            {
                for(int i=0;i<r;i++)
                {
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        int sum=0;
        for(int i=0;i<r;i++)
        {
            int x=1;
            for(int j=c-1;j>=0;j--)
            {
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;
    }
};