class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0,mn=INT_MAX;
        for(auto i:prices){
            mn=min(i,mn);
            mx=max(mx,i-mn);
        }
        return mx;
    }
};