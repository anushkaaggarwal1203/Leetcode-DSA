class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.length();
        st.push(s[0]);
        for(int i=1;i<n;i++){ 
            if(!st.empty() && s[i]==st.top()) st.pop();
            else st.push(s[i]);
        }
        s="";
        stack<char> temp;
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }
        while(temp.size()>0){
            s+=temp.top();
            temp.pop();
        }
        return s;
    }
};