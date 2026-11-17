class Solution {
public:
    bool isValid(string word) {
        bool f1=false;
        bool f2=false;
        int n=word.length();
        if(n<3) return false;
        char ch;
        for(int i=0;i<n;i++){
            ch=tolower(word[i]);
            if(ch>=90 && ch<=122){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') f1=true;
                else f2=true;
            }
            else if(ch>=48 && ch<=57) continue;
            else return false; 
        }
        if(!f1) return false;
        if(!f2) return false;
        return true;
    }
};