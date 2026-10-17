class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int n1=sentences[i].length();
            int w=1;
            for(int j=0;j<n1;j++){
                if(sentences[i][j]==' ') w++;
            }
            mx=max(mx,w);
        }
        return mx;
    }
};