class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> ans;
        int c;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1) c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};