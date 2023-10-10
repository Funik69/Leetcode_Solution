class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans=INT_MAX;
        sort(nums.begin(), nums.end());
        nums.erase(unique(begin(nums),end(nums)),end(nums));
        int end = 0;
        for(int start=0,end=0; start<nums.size(); ++start)
        {
            while (end < nums.size() && nums[end] < nums[start] + n) 
            {
                ans=min(ans,n-(++end -start));
            }
        }

        return ans;
    }
};