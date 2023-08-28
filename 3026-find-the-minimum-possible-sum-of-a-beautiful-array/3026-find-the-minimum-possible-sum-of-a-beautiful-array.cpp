class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n==1) return 1;
        long long sum=0;
        int i=0,cnt=1;
        unordered_map<int,int> mp;
        while(i<n){
            if(mp[target-cnt]==0){
                sum+=cnt;
                i++;
                mp[cnt]++;
            }
            cnt++;
        }
        return sum;
    }
};