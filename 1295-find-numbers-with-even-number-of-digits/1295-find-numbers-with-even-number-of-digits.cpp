class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            if(s.size()%2==0) c++;
        }
        return c;
    }
};