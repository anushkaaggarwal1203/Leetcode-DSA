class Solution {
public:
    bool isBalanced(string num) {
        int sume=0,sumo=0;
        int n=num.length();
        for(int i=0;i<n;i++){
            if(i%2==0) sume+=(num[i]-'0');
            else sumo+=(num[i]-'0');
        }
        if(sume==sumo) return true;
        else return false;
    }
};