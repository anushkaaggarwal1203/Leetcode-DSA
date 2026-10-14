class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]>=97 && s[i]<=122) st.push(s[i]);
            else{
                st.pop();
            }
        }
        string s1="";
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};