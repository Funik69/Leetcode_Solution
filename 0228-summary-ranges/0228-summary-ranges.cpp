class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return {};
        vector<string> v;
        int val = nums[0];
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1 || nums[i]+1!=nums[i+1]){
                if(nums[i]== val) {
                    v.push_back(to_string(val));
                }
                else {
                    v.push_back(to_string(val)+"->"+to_string(nums[i]));
                }
                if(i!=nums.size()-1) val = nums[i+1];
            }
        }
        return v;
    }
};