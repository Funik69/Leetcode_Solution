class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>> pq;
        pq.push({nums[n-1],n-1});
        long long ans=nums[n-1];
        for(int i=n-2;i>=0;i--){
            while(pq.top().second - i >k) pq.pop();
            long long val = max(nums[i],nums[i]+pq.top().first);
            pq.push({val,i});
            ans=max(ans,val);
        }
        return ans;
    }
};