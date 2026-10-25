class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int p=0;
        int q;
        for(int i=0;i<=n;i++){
            if(s[i]==' '|| i==n){
                q=i-1;
                while(p<q){
                    swap(s[p],s[q]);
                    p++;
                    q--;
                }
                p=i+1;
            }
        }
        return s;

    }
};