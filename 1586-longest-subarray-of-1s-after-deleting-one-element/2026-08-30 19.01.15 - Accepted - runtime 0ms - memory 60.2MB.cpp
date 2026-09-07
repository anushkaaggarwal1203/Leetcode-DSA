class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int flag=0;
        int k=1;
        int i=0,j=0,flips=0;
        int len;
        int maxLen=INT_MIN;
        while(j<n)
        {
            if(nums[j]==1) j++;
            else{
                if(flips<k){
                    flips++;
                    flag=1;
                    j++;
                }
                else{
                    len=j-i-1;
                    maxLen=max(len,maxLen);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len=j-i-1;
        maxLen=max(len,maxLen);
        if(flag==0) return n-1;
        else return maxLen;
    }
};