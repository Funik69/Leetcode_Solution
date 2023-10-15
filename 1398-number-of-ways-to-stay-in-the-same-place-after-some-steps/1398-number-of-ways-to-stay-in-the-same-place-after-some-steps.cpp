class Solution {
public:
int mod=1e9+7;
int soll(int i,int j,int steps,int mx,vector<vector<int>>& dp){
    if(j==steps){
        if(i==0) return 1;
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    long long int left=0,stay=0,right=0;
    if(i>0)
    left=soll(i-1,j+1,steps,mx,dp);
    stay=soll(i,j+1,steps,mx,dp);
    if(i<mx-1)
    right=soll(i+1,j+1,steps,mx,dp);
    return dp[i][j]=((left+right)%mod+stay)%mod;
}
    int numWays(int steps, int arrLen) {
        int n=min(steps/2+1,arrLen);
        vector<vector<int>> dp(n,vector<int> (steps+1,-1));
        return soll(0,0,steps,n,dp);
    }
};