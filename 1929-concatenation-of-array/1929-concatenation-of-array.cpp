class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<=1;i++){
            for(int j=0;j<n;j++){
                v.push_back(nums[j]);
            }
        }
        return v;
    }
};