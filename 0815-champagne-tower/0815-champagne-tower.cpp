class Solution {
public:
    double champagneTower(int poured, int qr, int qg) {
        vector<double> prevRow(1,poured);
        for(int i=1;i<=qr;i++){
            vector<double> cur(i+1,0);
            for(int j=0;j<i;j++){
                double extra = prevRow[j]-1;
                if(extra>0){
                    cur[j]+=extra*0.50;
                    cur[j+1]+=extra*0.50;
                }
            }
            prevRow = cur;
        }
        return min(1.00,prevRow[qg]);
    }
};