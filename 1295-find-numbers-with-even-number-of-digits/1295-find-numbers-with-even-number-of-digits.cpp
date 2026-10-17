class Solution {
public:
    int count(int n){
            int c=0;
            while(n>0){
                c++;
                n/=10;
            }
            return c;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        int a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            a=count(nums[i]);
            if(a%2==0) c++;
        }
        return c;
    }
};