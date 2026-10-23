class Solution {
public:
    void reverseString(vector<char>& s) {
        int q=s.size()-1;
        int p=0;
        while(p<q){
            char temp=s[p];
            s[p]=s[q];
            s[q]=temp;
            p++;
            q--;
        }
    }
};