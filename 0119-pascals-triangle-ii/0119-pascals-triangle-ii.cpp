class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vv(rowIndex+1);
        vv[0].push_back(1);
        for(int i=1;i<rowIndex+1;i++){
            vv[i].push_back(1);
            for(int j=1;j<i;j++){
                vv[i].push_back(vv[i-1][j]+vv[i-1][j-1]);
            }
            vv[i].push_back(1);
        }
    return vv[rowIndex];}
};