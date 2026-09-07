class Solution {
public:
    void sortColors(vector<int>& nums) {
        int no0=0,no1=0,no2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) no0+=1;
            else if(nums[i]==1) no1+=1;
            else no2+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(i<no0) nums[i]=0;
            else if(i<no0+no1) nums[i]=1;
            else nums[i]=2;
        }
        return;
    }
};
