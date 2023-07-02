class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> vv;
        if(n<3) return vv;
        vector<int> isprime(n+1,1);
        isprime[0]=0;
        isprime[1]=0;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*2;j<=n;j+=i){
                    isprime[j]=0;
                }
            }
        }

        int m=n/2;
         for(int i=1;i<=m;i++){
             if(isprime[i] && isprime[n-i]) vv.push_back({i,n-i});
             
         }
        return vv;
    }
};