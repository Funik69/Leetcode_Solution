class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int> mp;
        int ans=INT_MIN;
        for(int i=0,j=0;j<s.size();j++){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i++]]--;
            }
            ans=max(ans,j-i+1);
        }
        return ans==INT_MIN?0:ans;
    }
};