class Solution {
public:
    void rotatefunc(vector<int>& nums,int i,int j)
    {
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rotatefunc(nums,0,n-k-1);
        rotatefunc(nums,n-k,n-1);
        rotatefunc(nums,0,n-1);
    }
};