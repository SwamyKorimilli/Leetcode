class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c=0,l=0;
        for(int i=1;i<nums.size()-1;i++){
            int j=i+1;
           if(nums[i]!=nums[j]){
               if(nums[i]>nums[l] && nums[i]>nums[j] || nums[i]<nums[l]&& nums[i]<nums[j]){
                    c+=1;
               }
               l=i;
           }
        }
        return c;
        }
};