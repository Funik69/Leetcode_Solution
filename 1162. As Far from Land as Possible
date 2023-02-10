class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};
        int n = grid.size();
        vector<vector<int>> vis(n,vector<int>(n));
        queue<pair<int,int>> q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1){
                    vis[i][j] = 1;
                    q.push({i,j});
                }
            }
        }
        if(q.size()==n*n)  return -1;
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            ans++;
            for(int i = 0;i<size;i++){
                auto node = q.front();
                q.pop();
                int r = node.first;
                int c = node.second;
                for(int i = 0;i<4;i++){
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if(nr>=0 && nr<n && nc>=0 && nc<n && !vis[nr][nc]){
                        vis[nr][nc] = 1;
                        q.push({nr,nc});
                    }
                }
            }
        }
        return ans-1;
    }
};
