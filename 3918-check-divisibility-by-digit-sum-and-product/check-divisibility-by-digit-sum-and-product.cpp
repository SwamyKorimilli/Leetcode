class Solution {
public:
    bool checkDivisibility(int n) {
        int t=n,s=0,p=1;
        while(n>0){
            int rem=n%10;
            s+=rem;
            p*=rem;
            n/=10;
        }
        if(t%(s+p)==0){
            return true;
        }
        return false;
    }
};