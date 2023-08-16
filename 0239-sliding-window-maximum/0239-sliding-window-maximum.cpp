class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq; 
        vector<int> temp;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            while(!pq.empty() && pq.top().second <= i-k)
                pq.pop();
            pq.push({nums[i],i});
            if(i >= k-1) temp.push_back(pq.top().first);
        }
        return temp;
    }
};