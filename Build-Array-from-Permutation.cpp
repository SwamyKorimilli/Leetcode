class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> arr=nums;
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=nums[nums[i]];
        }
        return arr;
    }
};