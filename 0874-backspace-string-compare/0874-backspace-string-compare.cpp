class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",s2="";
        for(auto i:s){
            if(s1.size()!=0 and i=='#') s1.pop_back();
            else if(i!='#') s1+=i;
        }
         for(auto i:t){
            if(s2.size()!=0 and i=='#') s2.pop_back();
            else if(i!='#') s2+=i;
        }
        return s1==s2;
    }
};