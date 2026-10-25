class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int p=0;
        int q;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                q=i-1;
                while(p<q){
                    char temp=s[p];
                    s[p]=s[q];
                    s[q]=temp;
                    p++;
                    q--;
                }
                p=i+1;
            }
        }
        q=n-1;
        while(p<q){
            char temp=s[p];
            s[p]=s[q];
            s[q]=temp;
            p++;
            q--;
        }
        return s;

    }
};