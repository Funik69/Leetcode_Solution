class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,INT_MAX));
        dp[0][0]=0;
        for(int i=1;i<=m;i++) dp[0][i] = dp[0][i-1] + s2[i-1];
        for(int i=1;i<=n;i++) dp[i][0] = dp[i-1][0] + s1[i-1];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else 
                dp[i][j] = min(dp[i][j-1]+s2[j-1],dp[i-1][j] + s1[i-1]);
            }
        }
        return dp[n][m];
    }
};