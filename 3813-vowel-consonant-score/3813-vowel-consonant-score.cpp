class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        int score;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i') v++;
                else c++;
            }
        }
        if(c>0) score=v/c;
        else score=0;
        return score;

    }
};