class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector <int>>v(n,vector<int>(n));
        int minr=0,minc=0,maxr=n-1,maxc=n-1;
        int tne=n*n;
        int a=1;
        while(minr<=maxr && minc<=maxc)
        {
            for(int j=minc;j<=maxc&&a<=tne;j++)
            {
                v[minr][j]=a;
                a++;
            }
            minr++;
            for(int i=minr;i<=maxr&&a<=tne;i++)
            {
                v[i][maxc]=a;
                a++;
            }
            maxc--;
            for(int j=maxc;j>=minc&&a<=tne;j--)
            {
                v[maxr][j]=a;
                a++;
            }
            maxr--;
            for(int i=maxr;i>=minr&&a<=tne;i--)
            {
                v[i][minc]=a;
                a++;
            }
            minc++;

        }
        return v;
        
    }
};