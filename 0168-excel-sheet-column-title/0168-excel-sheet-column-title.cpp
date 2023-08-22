class Solution {
public:
    string convertToTitle(int col) {
        string str="";
        while(col--){
            str+=((col)%26 + 'A');
            col/=26;
        }
         reverse(str.begin(),str.end());
         return str;
    }
};