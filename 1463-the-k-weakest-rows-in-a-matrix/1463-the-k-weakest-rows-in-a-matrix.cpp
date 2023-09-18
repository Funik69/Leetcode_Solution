class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<mat.size();i++){
            int cnt=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            pq.push({cnt,i});
        }
        while(!pq.empty() && k--){
            int a=pq.top().second;
            pq.pop();
            ans.push_back(a);
        }
        return ans;
    }
};