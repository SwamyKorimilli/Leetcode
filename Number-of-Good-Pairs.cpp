class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<char,int>mpp;
        int c=0;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto it:mpp){
            c+=(it.second*(it.second-1))/2;
        }
        return c;
    }
};