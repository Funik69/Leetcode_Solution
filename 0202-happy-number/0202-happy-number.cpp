class Solution {
public:
    bool isHappy(int n) {
        int num=0;
        while(n!=0){
            int val=n%10;
            num+=val*val;
            n=n/10;
        }
        n=num;
        if(n==89) return false;
        if(n==1) return true;
        return isHappy(n);
    }
};