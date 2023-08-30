class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if(k==0){
            if(nums1==nums2) return 0;
            else return -1;
        }
        long long cnt=0;
        long long diff=0;
        long long sum=0;
        for(int i=0;i<nums1.size();i++){
            int diff=nums1[i]-nums2[i];
            sum+=diff;
            if(diff%k!=0)return -1;
                cnt+=abs(diff/k);
        }
        if(sum==0) return cnt/2;
        return -1;
    }
};