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
        n=s1.length();
        int p=0;
        int q=n-1;
        while(p<q){
            if(s1[p]!=s1[q]) return false;
            p++;
            q--;
        }
        return true;
    }
};