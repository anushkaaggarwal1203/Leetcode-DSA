class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
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
        */
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
            else if(nums[mid]==0)
            {
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else mid++;
        }
    }
};
