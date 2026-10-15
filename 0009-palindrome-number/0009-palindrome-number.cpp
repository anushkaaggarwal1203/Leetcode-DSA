class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n=x;
        long r=0;
        while(n>0){
            r=r*10+(n%10);
            n=n/10;
        }
        if(x==r) return true;
        else return false;
    }
};