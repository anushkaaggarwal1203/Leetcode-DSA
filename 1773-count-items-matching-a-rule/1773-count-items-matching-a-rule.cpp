class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int c=0;
        int idx=0;
        if(ruleKey=="color") idx=1;
        else if(ruleKey=="name") idx=2;
        for(int i=0;i<n;i++){
            if(items[i][idx]==ruleValue) c++;
        }
        return c;
    }
};