class Solution {
public:
    int countOrders(int n) {
        long fact=1;
        int mod=1e9+7;
        for(int i=2;i<=n;i++) fact=(fact*(2*i-1)*i)%mod;
        return fact;
    }
};