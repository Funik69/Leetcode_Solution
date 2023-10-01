class Solution {
public:
    string reverseWords(string s) {
        int st=0;
        int e=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                e=i;
                reverse(s.begin()+st,s.begin()+e);
                st=i+1;
            }
            if(i==s.size()-1)
                reverse(s.begin()+st,s.end());
        }
   return s; }
};