class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum = accumulate(nums.begin(),nums.end(),0);
        int  mxLen=INT_MIN , curSum=0;
        int i=0,j=0;
        while(j<nums.size()){
            curSum+=nums[j];
            while(i<=j && curSum > sum - x){
                curSum-=nums[i++];
            }
            if(curSum == sum - x){
                mxLen = max(mxLen , j-i+1);
            }
            j++;
        }
        return mxLen == INT_MIN?-1:nums.size() - mxLen;

    }
};