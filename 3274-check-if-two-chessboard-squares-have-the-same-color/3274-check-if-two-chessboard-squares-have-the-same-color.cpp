class Solution {
public:
    bool colour(string str1,string str2){
        int a=(str1[0]+str1[1])%2;
        int b=(str2[0]+str2[1])%2;
        if(a==b) return true;
        return false;
    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return colour(coordinate1,coordinate2);
    }
};