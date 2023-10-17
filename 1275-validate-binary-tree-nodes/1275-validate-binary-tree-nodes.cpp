class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> indegree(n, 0);
        for(int i = 0; i<n; i++){
            if(leftChild[i] != -1){
                indegree[leftChild[i]]++;
            }
            if(rightChild[i] != -1){
                indegree[rightChild[i]]++;
            }
        }
        int root = -1;
        for(int i = 0; i<n; i++){
            if(indegree[i] == 0){
                if(root == -1){
                    root = i;
                }
                else{
                    return false;
                }
            }
        }
        if(root == -1){
            return false;
        }

        vector<int> visited(n, 0);
        queue<int> q;
        q.push(root);

        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(visited[temp]){
                return false;
            }
            visited[temp] = 1;
            if(leftChild[temp] != -1){
                q.push(leftChild[temp]);
            }
            if(rightChild[temp] != -1){
                q.push(rightChild[temp]);
            }
        }
        int sum = 0;
        for(auto i : visited){
            if(i == 1){
                sum++;
            }
        }
        return sum == n;
    }
};