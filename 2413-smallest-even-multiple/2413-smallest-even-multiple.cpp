class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=n;
        while(1){
            if(i%n==0 && i%2==0) return i;
            i+=n;
        }
    }
};