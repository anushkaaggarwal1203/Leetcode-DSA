class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int x=0;
        int y=c-1;
        while(x<=r-1 && y>=0)
        {
            if(matrix[x][y]==target) return true;
            else if(matrix[x][y]>target) y--;
            else x++;
        }
        return false;
    }
};