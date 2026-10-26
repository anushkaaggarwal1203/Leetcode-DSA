class Solution {
public:
    bool judgeCircle(string moves) {
        int a=0,b=0;
        int n=moves.length();
        for(int i=0;i<n;i++){
            if(moves[i]=='U') a++;
            else if(moves[i]=='D') a--;
            else if(moves[i]=='L') b++;
            else b--;
        }
        if(a==0 && b==0) return true;
        return false;
    }
};