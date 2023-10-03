class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> ump;
        for(auto i:nums){
            ump[i]++;
        }
        for(auto i:ump){
            int n=i.second;
            ans+=n*(n-1)/2;
        }
        return ans;
    }
};