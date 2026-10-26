class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n=words.size();
        int n1=s.size();
        if(n!=n1) return false;
        for(int i=0;i<n;i++){
            if(s[i]!=words[i][0]) return false;
        }
        return true;
    }
};