class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(auto i:nums) st.insert(i);
        int cnt=0,ans=0,cur=0;
        for(auto i:nums){
            if(!st.count(i-1)){
                cnt=1;
                cur=i;
                while(st.count(cur+1)){
                    cnt++;
                    cur++;
                }
                ans=max(cnt,ans);
            }
        }
        return ans;
    }
};