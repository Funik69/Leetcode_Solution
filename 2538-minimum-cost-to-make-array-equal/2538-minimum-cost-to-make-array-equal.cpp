class Solution {
public:
long long soll(vector<int> & nums,vector<int> &cost,int mid){
    long long sum=0;
    for(int i=0;i<nums.size();i++){
        long long k=abs(nums[i]-mid);
        sum+=k*cost[i];
    }
    return sum;
}
    long long minCost(vector<int>& nums, vector<int>& cost) {
        if(nums.size()==1) return 0;
        int low=1;
        int high=1e6;
        while(low<=high){
            int mid=(low+high)/2;
            long long s1=soll(nums,cost,mid);
            if(low==high) return s1;
            long long s2=soll(nums,cost,mid-1);
            long long s3=soll(nums,cost,mid+1);

            if(s2>=s1 && s1<=s3) return s1;
            else if(s2<s1){
                high=mid;
            }
            else if(s3<s1){
                low=mid;
            }
            else {}
        }
        return 0;
    }
};