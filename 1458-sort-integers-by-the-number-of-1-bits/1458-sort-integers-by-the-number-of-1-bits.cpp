class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>>v;
        for(int i=0; i<arr.size(); i++)
            v.push_back({__builtin_popcount(arr[i]), arr[i]});
        
        sort(v.begin(), v.end());
        vector<int>ans;
        for(int i=0; i<v.size(); i++)
            ans.push_back(v[i].second);
        return ans;
    }
};