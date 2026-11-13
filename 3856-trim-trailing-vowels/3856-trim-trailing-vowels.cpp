class Solution {
public:
    string trimTrailingVowels(string s) {
        string str="";
        int n=s.length();
        int i;
        for(i=n-1;i>=0;i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                continue;
            }
            else{
                str+=s[i];
                break;
            }
        }

        for(int j=i-1;j>=0;j--){
            str+=s[j];
        }
        reverse(str.begin(),str.end());
        return str;
    }
};