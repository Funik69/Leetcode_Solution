class Solution {
public:
bool soll(int i,int k,vector<int> & s, vector<vector<int>>& dp){
    if(i==s.size()-1) return true;
    bool chk=false;
    if(dp[i][k]!=-1) return dp[i][k];
    for(int j=i+1;j<s.size();j++){
        if(s[j]>(s[i]+k+1)) break;
        else if(s[j]==(s[i]+k-1)) chk|=soll(j,k-1,s,dp);
        else if(s[j]==(s[i]+k)) chk|=soll(j,k,s,dp);
        else if(s[j]==(s[i]+k+1)) chk|=soll(j,k+1,s,dp);
       // else {}
    }
    return dp[i][k]=chk;
}
    bool canCross(vector<int>& s) {
        vector<vector<int>> dp(s.size()+1,vector<int>(4000,-1));
        return soll(0,0,s,dp);
    }
};