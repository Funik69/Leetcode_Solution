class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& arr, vector<int>& queries) {
    map<int, int> occ;
    int n = arr.size(), m = queries.size();
    for(int i = 0; i<n; i++){
        occ[arr[i][0]]++;
        occ[arr[i][1] + 1]--;
    }
    map<int, int> pref;
    vector<int> points;
    points.push_back(0);
    pref[0] = 0;
    int prv = 0;
    for(auto it: occ){
        int x = it.first, y = it.second;
        pref[x] = pref[prv] + y;
        points.push_back(x);
        prv = x;
    }
    vector<int> ans(m);
    for(int i = 0; i<m; i++){
        int q = queries[i];
        auto it = upper_bound(points.begin(), points.end(), q);
        it = prev(it);
        ans[i] = pref[*it];
    }
    return ans;

    }
};