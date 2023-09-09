class Solution {
public:
    int combinationSum4(vector<int>& nums, int tar) {
        vector<unsigned> dp(tar+1);
        dp[0]=1;
        for(int i=1;i<=tar;i++){
            for(auto j:nums){
                if(i>=j){
                    dp[i] += dp[i-j];
                }
            }
        }
        return dp[tar];
    }
};