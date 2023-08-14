class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:v){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};