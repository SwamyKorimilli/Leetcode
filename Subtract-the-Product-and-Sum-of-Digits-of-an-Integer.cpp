class Solution {
public:
    int subtractProductAndSum(int n) {
        int s1=0,s2=1,rem=0;
        while(n!=0){
            rem=n%10;
            s1+=rem;
            s2*=rem;
            n=n/10;
        }
        return s2-s1;
    }
};