class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& v) {
	vector<int> adj[V];	
    vector<int> indegree(V,0);
		for(auto i:v){
			adj[i[0]].push_back(i[1]);
		}
	   for(int i=0;i<V;i++){
	       for(auto j:adj[i]){
	           indegree[j]++;
	       }
	   }
	   queue<int> q;
	   for(int i=0;i<V;i++){
	       if(indegree[i]==0) q.push(i);
	   }
	   vector<int> ans;
	   while(!q.empty()){
	       int node=q.front();
	       q.pop();
	       ans.push_back(node);
	       for(auto i:adj[node]){
	           indegree[i]--;
	           if(indegree[i]==0) q.push(i);
	       }
	   }
	   return ans.size()==V;
    }
};