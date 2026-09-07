class Solution {
public:
    bool isValid(string s){
    if(s.length()%2!=0) return false;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else
            {
                if(st.empty()) return false;
                else
                {
                    char ch=st.top();
                    if((s[i]==')' && ch=='(')||(s[i]=='}'&&ch=='{')||(s[i]==']'&&ch=='[')) st.pop();
                    else return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }

};
