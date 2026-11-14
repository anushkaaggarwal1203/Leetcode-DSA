class Solution {
public:
    int helper(string s){
        int se=stoi(s.substr(6,8));
        int h=stoi(s.substr(0.2));
        int m=stoi(s.substr(3,5));
        return h*3600 + m*60 +se;

    }
    int secondsBetweenTimes(string startTime, string endTime) {
        return helper(endTime)-helper(startTime);
    }
};