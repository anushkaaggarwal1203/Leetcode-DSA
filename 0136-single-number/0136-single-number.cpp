class Solution {
public:
    int singleNumber(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(!st.empty() && nums[i]==st.top()) st.pop();
            else st.push(nums[i]);
        }
        return st.top();
    }
};