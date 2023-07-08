class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<long long> v;
        for(int i=1;i<weights.size();i++)
            v.push_back(weights[i]+weights[i-1]);
        sort(v.begin(),v.end());
        int n=v.size();
        long long mini=0;
        for(int i=0;i<k-1;i++){
            mini+= v[i];
        }

        long long mx=0;
        for(int i=0;i<k-1;i++){
            mx+= v[n-1-i];
        }
        return mx - mini;
    }
};