class Solution {
    int func(int i,int &n,int msk,vector<vector<int>> &dis,vector<vector<int>> &dp){
        if(msk==((1<<n)-1))
            return 0;
        if(dp[msk][i]!=-1)
            return dp[msk][i];
        int res = INT_MAX;
        for(int j=0;j<n;j++){
            if(msk & (1<<j))
                continue;
            res = min(res,dis[i][j]+func(j,n,msk | (1<<j),dis,dp));
        }
        return dp[msk][i] = res;
    }
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> dis(n,vector<int>(n,1e5));
        for(int i=0;i<n;i++){
            dis[i][i] = 0;
            for(int j=0;j<graph[i].size();j++)
                dis[i][graph[i][j]] = 1;
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dis[i][j] = min(dis[i][j],dis[i][k] + dis[k][j]);
                }
            }
        }
        int ans = INT_MAX;
        vector<vector<int>> dp((1<<n),vector<int>(n,-1));
        for(int i=0;i<n;i++){
            ans = min(ans,func(i,n,(1<<i),dis,dp));
        }
        return ans;
    }
};