class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<n;i++){
            if(pow(4,i)==n)
                return true;
            if(pow(4,i)>n)
                return false;
        }
        
    return false;}
};