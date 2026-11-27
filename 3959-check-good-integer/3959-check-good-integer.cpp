class Solution {
public:
    bool checkGoodInteger(int n) {
        int r,ss=0,ds=0;
        while(n>0){
            r=n%10;
            ds+=r;
            ss+=(r*r);
            n=n/10;
        }
        if((ss-ds)>=50) return true;
        return false;
    }
};