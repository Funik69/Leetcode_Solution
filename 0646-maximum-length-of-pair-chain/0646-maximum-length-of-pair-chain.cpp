class Solution {
public:
static int comp(vector<int> &a,vector<int> & b){
    return a[1] < b[1];
}
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),comp);
        int cnt=1,idx=0;
        for(int i=1;i<pairs.size();i++){
            if(pairs[idx][1]<pairs[i][0]){
                idx=i;
                cnt++;
            }
        }
        return cnt;
    }
};