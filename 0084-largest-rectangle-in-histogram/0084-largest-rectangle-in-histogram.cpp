class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int nsi[n];
        stack<int> st;
        nsi[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) nsi[i]=n;
            else nsi[i]=st.top();
            st.push(i);
        }
        int psi[n];
        stack<int> s;
        psi[0]=-1;
        s.push(0);
        for(int i=1;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]) s.pop();
            if(s.empty()) psi[i]=-1;
            else psi[i]=s.top();
            s.push(i);
        }
        int a=0;
        int maxA=INT_MIN;
        for(int i=0;i<n;i++){
            a=heights[i]*(nsi[i]-psi[i]-1);
            maxA=max(a,maxA);
        }
        return maxA;

    }
};