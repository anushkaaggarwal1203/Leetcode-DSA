class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n=words.size();
        string s1="";
        for(int i=0;i<n;i++){
            s1+=words[i][0];
        }
        return s==s1;
    }
};