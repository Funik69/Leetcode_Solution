class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& grp) {
        unordered_map<int,vector<int>> ump;
        vector<vector<int>> ans;
        for(int i=0;i<grp.size();i++) ump[grp[i]].push_back(i);
        for(auto i:ump){
            int k = i.first;
            auto f= i.second;
            int size = f.size()/k;
            int l=0;
            for(int i=0;i<size;i++){
                vector<int> cur;
                for(int j=0;j<k;j++){
                    cur.push_back(f[l]);
                    l++;
                }
                ans.push_back(cur);
            }
        }
        return ans;
    }
};