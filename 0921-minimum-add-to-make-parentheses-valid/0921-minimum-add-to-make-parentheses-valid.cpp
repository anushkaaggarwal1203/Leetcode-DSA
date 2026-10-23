class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int n=s.length();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(!st.empty() && st.top()=='(') st.pop();
                else st.push(s[i]);
            }
        }
        while(!st.empty()){
            c++;
            st.pop();
        }
        return c;
    }
};