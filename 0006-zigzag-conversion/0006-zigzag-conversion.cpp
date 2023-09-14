class Solution {
public:
    string convert(string s, int row) {
        int i=0;
        string ans="";
        vector<vector<int>> vs(row);
        while(i<s.size()){
            int n=0;
            while(n<row && i<s.size()){
                vs[n++].push_back(s[i++]);
            }
            n-=2;
            while(n>0 && i<s.size()){
                vs[n--].push_back(s[i++]);
            }
        }
        for(auto i:vs){
            for(auto j:i){
                ans+=j;
            }
        }
        return ans;
    }
};