class Solution {
public:
    int soll(int i,int tot,vector<int> & cost,vector<int> &time,vector<vector<int>> &dp){
        if(tot<=0) return 0;
        if(i>=cost.size()) return 1e9;
        if(dp[i][tot]!=-1) return dp[i][tot];

        int take = cost[i]+soll(i+1,tot-time[i]-1,cost,time,dp);
        int not_take = 0+soll(i+1,tot,cost,time,dp);

        return dp[i][tot]=min(take,not_take);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return soll(0,n,cost,time,dp);
    }
};