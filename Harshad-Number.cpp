class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s=0;
        int rem=0;
        int n=x;
        while(x!=0){
            rem=x%10;
            s+=rem;
            x=x/10;
        }
        if(n%s==0) return s;
        else return -1;
    }
};