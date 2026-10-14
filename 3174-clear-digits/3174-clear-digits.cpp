class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(isalpha(s[i])) st.push(s[i]);
            else{
                if(!st.empty() && isalpha(st.top())) st.pop();
                else st.push(s[i]);
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