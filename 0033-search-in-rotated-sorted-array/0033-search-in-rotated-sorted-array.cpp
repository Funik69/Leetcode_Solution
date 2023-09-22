class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int mid= (i+j)/2;
            if(nums[mid]==target) return mid;
            else if(nums[i]<=nums[mid]){
                if(nums[i]<=target and nums[mid]>target) j=mid-1;
                else i= mid+1;
            }
            else {
                if(nums[mid]<target and target<=nums[j]) i=mid+1;
                else j=mid-1;
            }
        }
        return -1;
    }
};