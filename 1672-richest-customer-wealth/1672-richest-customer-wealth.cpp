class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=INT_MIN;
        int s;
        int n=accounts.size();
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
            s=0;
            for(int j=0;j<m;j++){
                s+=accounts[i][j];
            }
            mx=max(s,mx);
        }
        return mx;
    }
};