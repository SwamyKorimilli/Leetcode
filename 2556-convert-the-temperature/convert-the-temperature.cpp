class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector <double>f;
        f.push_back(celsius+273.15);
        f.push_back((celsius*1.80)+32.00);
        return f;
    }
};