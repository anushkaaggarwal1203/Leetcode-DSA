class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
        result.reserve(n);
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            if(candies[i]>m) m=candies[i];
        }
        for(auto p:candies){
            if((p+extraCandies)>=m) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};