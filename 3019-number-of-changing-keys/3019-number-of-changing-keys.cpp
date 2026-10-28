class Solution {
public:
    int countKeyChanges(string s) {
        int c=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(tolower(s[i])!=tolower(s[i-1])) c++;
        }
        return c;
    }
};