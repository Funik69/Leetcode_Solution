class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0, mx=INT_MIN;
        for(auto i:nums){
            cur+=i;
            mx=max(cur,mx);
            if(cur<0){
                cur=0;
            }
        }
        return mx;
    }
};