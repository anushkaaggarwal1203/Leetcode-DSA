class Solution {
public:
    bool isPalindrome(string s) {
        char ch;
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            ch=tolower(s[i]);
            if((ch>=97 && ch<=122)||(ch>=48 && ch<=57)){
                s1+=ch;
            }
        }
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2) return true;
        return false;
    }
};