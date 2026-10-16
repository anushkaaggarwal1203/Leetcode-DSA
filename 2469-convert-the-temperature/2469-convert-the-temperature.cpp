class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v(2);
        double k=celsius+273.15;
        double f=celsius*1.80+32.00;
        v[0]=k;
        v[1]=f;
        return v;
    }
};