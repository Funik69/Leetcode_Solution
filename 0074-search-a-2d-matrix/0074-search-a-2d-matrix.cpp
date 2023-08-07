class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix[0].size();
        int m =matrix.size();
        int r=0,c=n-1;
        while(r<m && c>=0){
            if (target== matrix[r][c]) return true;
            if(target>matrix[r][c]) r++;
            else c--;}
         return false;
    }
};