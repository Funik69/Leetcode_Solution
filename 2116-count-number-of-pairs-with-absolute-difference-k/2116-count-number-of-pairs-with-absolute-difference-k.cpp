class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> hash;
        for(auto i:nums) hash[i]++;
        int ans=0;
        for(auto i:nums){
           if(hash.find(i+k)!=hash.end()){
               ans+=hash[i+k];
           }
        }
        return ans;
    }
};