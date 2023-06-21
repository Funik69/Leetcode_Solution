class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str="";
        for(auto i:s){
            if(i==' '){
                if(str.size()==0) continue;
                 v.push_back(str); str="";}
            else str+=i;
        }
        if(str.size()>0)
        v.push_back(str);
        str="";
        for(int i=v.size()-1;i>0;i--){
            str+=v[i];
            str+=" ";
        }
        str+=v[0];
        return str;
    }
};