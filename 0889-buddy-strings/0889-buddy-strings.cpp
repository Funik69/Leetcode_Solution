class Solution {
public:
     bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        int cnt =0;
        vector<int>v;
        for(int i = 0 ;i<s.length();i++){
            if(s[i]!=goal[i]){
                cnt++;
                v.push_back(i);
            }
        }
        
        if(cnt == 2){
            int i = v[0];
            int j = v[1];
            if(s[i]==goal[j] && s[j]==goal[i])
                return true;
            return false;
        }   
        if(cnt == 0){
            vector<int>freq(26,0);
            for(int i=0;i<s.length();i++){
                freq[s[i]-'a']++;
                if(freq[s[i]-'a']>1)
                    return true;
            }
            return false;
        }
        return false;
    }
};