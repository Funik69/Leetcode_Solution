class Solution {
public:
    int longestArithSeqLength(vector<int>& v) {
        int mx=0;
        int n=v.size();
        unordered_map<int,int>m[n+1];
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                int diff=v[j]-v[i];
                if(m[j].count(diff)){
                    m[i][diff]=m[j][diff]+1;
                }
                else {
                    m[i][diff]=2;
                }
                mx= max(mx, m[i][diff]);
            }
        }
        return mx;
    }
};