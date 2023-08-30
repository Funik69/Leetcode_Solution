class Solution {
public:
#define ll long long
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
        ll last=nums[n-1], ans=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>last){
                int cnt=nums[i]/last;
                if(nums[i]%last) cnt++;
                last=nums[i]/cnt;
                ans+=(cnt-1);
            }
            else last = nums[i];
        }
        return ans ;
    }
};