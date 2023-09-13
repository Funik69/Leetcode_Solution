class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int Tcost=0,Tgas=0;
        for(int i=0;i<n;i++){
            Tcost+=cost[i];
            Tgas+=gas[i];
        }
        if(Tcost>Tgas) return -1;
        int idx=0;
        int left=0;
        for(int i=0;i<n;i++){
            left+=gas[i]-cost[i];
            if(left<0){
                idx=i+1;
                left=0;
            }
        }
        return idx;
    }
};