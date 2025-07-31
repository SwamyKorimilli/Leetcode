class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int c=0,c1=0;
        for(int i:nums){
            c+=i;
        }
        for(int i:nums){
            while(i>9){
                int rem=i%10;
                c1+=rem;
                i/=10;
            }
            c1+=i;
        }
        return abs(c-c1);
    }
};