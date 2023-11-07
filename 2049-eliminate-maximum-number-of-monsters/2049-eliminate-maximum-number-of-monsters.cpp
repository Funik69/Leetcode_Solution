class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n =dist.size();
        vector<int> time(n+1,0);

        for(int i=0;i<n;i++){
            int t = ceil((double)dist[i]/speed[i]);
            if(t>n) t=n;
            time[t]++;
        }
        int dead=0,k=1;
        
        for(;k<=n;k++){
            dead+=time[k-1];
            if(k<=dead) break;
        }
        return --k;
    }
};