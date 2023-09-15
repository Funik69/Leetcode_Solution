class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp,m;
        for(int i=0;i<t.size();i++){
            if(mp.find(s[i])==mp.end())
            mp[s[i]]=t[i];
            else if(mp[s[i]]!=t[i]) return 0;
            if(m.find(t[i])==m.end())
            m[t[i]]=s[i];
            else if(m[t[i]]!=s[i]) return 0;
        }
        for(int i=0;i<t.size();i++){
            s[i]=mp[s[i]];
        }
        if(s==t) return 1;
         for(int i=0;i<t.size();i++){
            t[i]=m[t[i]];
        }
        return s==t;

    }
};