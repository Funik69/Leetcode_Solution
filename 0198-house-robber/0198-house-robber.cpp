class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[1],nums[0]);
        int a=nums[0];
        int b=max(nums[0],nums[1]);
        int c;
        int i=2;
        while(i<nums.size()){
            c=max(a+nums[i],b);
            a=b;
            b=c;
            i++;
        }
        return c;
    }
};