class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cur=0,reach=0;
        if(nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i++){
            reach = max(reach,i+nums[i]);
            if(i==cur) {
                cur=reach;
                if(cur>=nums.size()-1) return true;
            }
        }
        return false;
    }
};