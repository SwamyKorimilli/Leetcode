class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) c+=1;
            else if(nums[i]<0) c2+=1;
        }
        return (c>c2)?c:c2;
    }
};