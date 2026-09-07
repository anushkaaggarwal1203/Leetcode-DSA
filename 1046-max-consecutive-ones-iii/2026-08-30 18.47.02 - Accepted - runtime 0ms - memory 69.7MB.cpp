class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,f=0,l;
        int len=INT_MIN;
        while(j<n)
        {
            if(nums[j]==1) j++;
            else{
                if(f<k){
                    f++;
                    j++;
                }
                else{
                    l=j-i;
                    len=max(l,len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        l=j-i;
        len=max(l,len);
        return len;
    }
};