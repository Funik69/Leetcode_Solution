class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> ,
        greater<pair<int,pair<int,int>>>> pq;

        int n = heights.size(); int m = heights[0].size();

        vector<vector<int>> dist(n , vector<int>(m , 1e9));
        dist[0][0]=0;
        pq.push({0, {0,0}});

        int delR[] = {-1,0,1,0};
        int delC[] = {0,1,0,-1};
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            int difference = it.first;
            int r = it.second.first;
            int c = it.second.second;

            if(r==n-1 && c==m-1) return difference;

            for(int i=0 ; i<4 ; i++)
            {
                int nr = r+delR[i];
                int nc = c+delC[i];

                if(nr>=0 && nr<n && nc>=0 && nc<m)
                {
                    int newEffort ; 
                    newEffort = max( (abs(heights[r][c]-heights[nr][nc])) , difference);
                    if(newEffort < dist[nr][nc])
                    {
                        dist[nr][nc] = newEffort;
                        pq.push({newEffort , {nr,nc}});
                    }
                }
            }    

        } 
        return 0;
    }
};