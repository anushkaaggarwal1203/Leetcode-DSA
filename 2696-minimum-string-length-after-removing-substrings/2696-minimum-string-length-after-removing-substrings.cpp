class Solution {
public:
    int minLength(string s) {
        int n=s.length();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                if(!st.empty() && st.top()=='A') st.pop();
                else st.push(s[i]);
            }
            else if(s[i]=='D'){
                if(!st.empty() && st.top()=='C') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);

        }
        return st.size();
    }
};