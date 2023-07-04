class Solution {
public:
bool soll(string & s){
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i++]!=s[j--]) return false;
    }
    return true;
}
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=i;j<n;j++){
                str+=s[j];
                if(soll(str)) ans++;
            }
        }
        return ans;
    }
};