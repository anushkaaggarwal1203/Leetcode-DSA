class Solution {
public:
    int firstMatchingIndex(string s) {
        int p=0;
        int q=s.length()-1;
        while(p<=q){
            if(s[p]==s[q]) return p;
            p++;
            q--;
        }
        return -1;
    }
};