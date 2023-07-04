class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str="1";
        for(int i=2;i<=n;i++){
            string temp="";
            int cnt=1;
            int k=1;
            while(k<str.size()){
                if(str[k]==str[k-1]) cnt++;
                else {
                    temp+=to_string(cnt)+str[k-1];
                    cnt=1;
                }
                k++;
            }
            temp+=to_string(cnt)+str[k-1];
            str=temp;
        }
        return str;
    }
};

// class Solution {
// public:
//     string countAndSay(int n) {
//         if(n==1)return "1";
//         if(n==2) return "11";
//         string str="11";
//         for(int i=3;i<=n;i++){
//             string tmp="";
//             int k=1;
//             int cnt=1;
//             while(k<str.size()){
//                 if(str[k]==str[k-1]) cnt++;
//                 else{
//                     tmp+=to_string(cnt)+str[k-1];
//                     cnt=1;
//                 }
//                 k++;
//             }
//             tmp+=to_string(cnt)+str[k-1];
//             str=tmp;
//         }
//         return str;
//     }
// };