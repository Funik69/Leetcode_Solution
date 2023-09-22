class Solution {
public:
    int first_oc(vector<int>&nums,int target){
        int s=0;int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(target==nums[mid]){
                ans=mid;
                e=mid-1;
            }else if(target>nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
    int last_oc(vector<int>&nums,int target){
        int s=0;int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(target==nums[mid]){
                ans=mid;
                s=mid+1;
            }else if(target>nums[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        v.push_back(first_oc(nums,target));
        v.push_back(last_oc(nums,target));
        return v;
    }
};