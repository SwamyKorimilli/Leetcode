class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                c+=1;
                s+=nums[i];
            }
        }
        if(c==0) return 0;
        else return s/c;
    }
};