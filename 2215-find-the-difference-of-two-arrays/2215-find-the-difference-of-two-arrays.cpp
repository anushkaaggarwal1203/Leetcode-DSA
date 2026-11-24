class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v1;
        vector<int> v2;
        vector<vector<int>> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            bool flag=true;
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]) flag=false;
            }
            if(i>=1 && nums1[i]==nums1[i-1]) flag=false;
            if(flag) v1.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            bool flag=true;
            for(int j=0;j<n1;j++){
                if(nums2[i]==nums1[j]) flag=false;
            }
            if(i>=1 && nums2[i]==nums2[i-1]) flag=false;
            if(flag) v2.push_back(nums2[i]);
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};