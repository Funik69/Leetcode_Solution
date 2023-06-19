class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0,cur=0;
        for(auto i:gain){
            cur+=i;
            mx=max(mx,cur);
        }
        return mx;
    }
};