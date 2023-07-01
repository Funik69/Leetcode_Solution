class Solution {
public:
int soll(vector<int>& ck,int i,vector<int> &v){
    if(i==ck.size()){
        int ans=0;
        for(auto i:v) ans=max(ans,i);
        return ans;
    }
    int mn=INT_MAX;
    for(int j=0;j<v.size();j++){
        v[j]+=ck[i];
        mn=min(mn,soll(ck,i+1,v));
        v[j]-=ck[i];
    }
    return mn;
}
    int distributeCookies(vector<int>& coo, int k) {
       int n=coo.size();
       vector<int> v(k);
       return soll(coo,0,v);
    }
};