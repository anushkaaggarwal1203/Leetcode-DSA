class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int i=0,j=0,c=0;
        int p=1;
        while(j<n){
            p*=nums[j];
            while(p>=k){
                c+=(j-i);
                p/=nums[i];
                i++;
            }
            j++;
        }
        while(i<n){
            c+=(j-i);
            i++;
        }
        return c;
    }
};