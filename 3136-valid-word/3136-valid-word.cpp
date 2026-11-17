class Solution {
public:
    bool isValid(string word) {
        bool f1=false;
        bool f2=false;
        if(word.length()<3) return false;
        for(char ch:word){
            ch=tolower(ch);
            if(ch>='a' && ch<='z'){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') f1=true;
                else f2=true;
            }
            else if(ch>='0' && ch<='9') continue;
            else return false; 
        }
        return f1 && f2;
    }
};