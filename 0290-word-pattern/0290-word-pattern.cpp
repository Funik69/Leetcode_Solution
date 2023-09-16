class Solution {
public:
    bool wordPattern(string p, string s) {
        if(p==s && p.size()>1) return 0;
        string str="";
        set<string> st;
        int k=0;
        map<char,string> mp;
        for(auto i:s){
            if(i!=' '){
                str+=i;
            }
            else {
                if(mp.find(p[k])==mp.end()) {
                    if(st.count(str)) return 0; 
                    st.insert(str);
                    mp[p[k++]]=str; str="";
                   
                    }
                else if(mp[p[k]]!=str) return 0;
                else {str=""; k++;}
            }
        }
        if(k!=p.size()-1) return 0;
        if(mp.find(p[k])==mp.end() && !st.count(str)) return 1;
        else if(mp[p[k]]!=str) return 0;
        return 1;
    }
};