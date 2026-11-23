class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        for(int j=1;j<n;j++){
            for(int i=0;i<j;i++){
                if(nums[i]==nums[j]) c++;
            }
        }
        return c;
    }
};