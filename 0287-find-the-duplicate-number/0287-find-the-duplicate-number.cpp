class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            x=nums[i-1]^nums[i];
            if(x==0){
                x=nums[i];
                break;
            }
        }
        return x;
    }
};