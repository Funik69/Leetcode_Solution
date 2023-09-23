class Solution {
public:
bool isseq(string x , string y){
    int j=0;
    for(int i=0;i<y.size();i++){
        if(y[i]==x[j]) j++;
    }
    return x.size()==j;
}
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        int mx=0;
        sort(words.begin(),words.end(),[&](string &a , string &b){
            return a.size()<b.size();
        });
        vector<int> dp(n+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(isseq(words[j],words[i]) and words[j].size()+1==words[i].size()){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            mx=max(mx,dp[i]);
        }
        return mx+1;
    }
};