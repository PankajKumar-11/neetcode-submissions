class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while(x!=0){
            int d = x%10;
            x/=10;
            if(revNum > INT_MAX/10 || revNum == INT_MAX && d>7) return 0;
            if(revNum < INT_MIN/10 || revNum == INT_MIN && d<-8) return 0;
            revNum = revNum *10 + d;
        }
        return revNum;
        
    }
};
