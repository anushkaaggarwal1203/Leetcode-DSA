class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n1=word1.length();
        int n2=word2.length();
        int p=0,q=0;
        int m=min(n1,n2);
        for(int i=0;i<m;i++){
            s+=word1[p];
            s+=word2[q];
            p++;
            q++;
        }
        if(n1>n2){
            for(int i=p;i<n1;i++){
                s+=word1[i];
            }
        }
        else if(n2>n1){
            for(int i=q;i<n2;i++){
                s+=word2[i];
            }
        }
        return s;
    }
};