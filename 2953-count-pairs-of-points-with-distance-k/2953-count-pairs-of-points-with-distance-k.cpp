class Solution {
public:
    int countPairs(vector<vector<int>>& c, int k) {
        map<pair<int,int>,int> mp;
        int cnt=0;
        for(auto i:c){
            //if , c[i][0]^x=val                      
            //then c[i][1]^y=k-val    
            for(int j=0;j<=k;j++){
                //a^b=c then a^c=b
                int x=j^i[0];
                int y=(k-j)^i[1];
                cnt+=mp[{x,y}];
            }
            mp[{i[0],i[1]}]++;
        }
        return cnt;
    }
};