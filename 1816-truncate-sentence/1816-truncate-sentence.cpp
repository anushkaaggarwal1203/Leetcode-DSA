class Solution {
public:
    string truncateSentence(string s, int k) {
        string str="";
        int c=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                c++;
                if(c==k) break;
            }
            str+=s[i];
        }
        return str;
    }
};