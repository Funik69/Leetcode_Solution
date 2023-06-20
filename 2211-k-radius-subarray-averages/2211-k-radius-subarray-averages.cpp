class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),-1);
        vector<long long> prefix;
        long long cur=0;
        for(auto i:nums){
            cur+=i;
            prefix.push_back(1ll*cur);
        }
        cur=0;
        for(int i=2*k;i<nums.size();i++){
            ans[i-k]=(1ll*prefix[i]-cur)/(2*k+1);
            cur+=nums[i-2*k];
        }
       return ans;
    }
};