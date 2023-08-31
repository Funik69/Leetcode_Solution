class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<pair<int,int>> vp;
        for(int i=0;i<=n;i++){
            vp.push_back({i-ranges[i],i+ranges[i]});
        }
        auto comp = [](const pair<int,int>& p1, const pair<int,int>& p2){
            return p1.first < p2.first;
        };
        sort(vp.begin(),vp.end(),comp);
        int i=0,j=0,cnt=0,cur=0;
        while(i<=n && j <n){
            if(vp[i].first>j) return -1;
            cur=j;
            while(i<=n && vp[i].first <=j){
                cur = max(cur,vp[i].second);
                i++;
            }
            j=cur;
            cnt++;
        }
        return j>=n?cnt:-1;
    }
};