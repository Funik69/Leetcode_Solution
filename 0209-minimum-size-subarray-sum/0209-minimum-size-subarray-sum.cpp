class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,i=0,j=0;
        int ans=INT_MAX;
        while(i<nums.size()){
            sum+=nums[i++];
            while(sum>=target){
                ans=min(ans,i-j);
                sum-=nums[j++];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};