class Solution {
public:
    void reverseString(vector<char>& s) {
        int q=s.size()-1;
        int p=0;
        while(p<q){
            swap(s[p],s[q]);
            p++;
            q--;
        }
    }
};