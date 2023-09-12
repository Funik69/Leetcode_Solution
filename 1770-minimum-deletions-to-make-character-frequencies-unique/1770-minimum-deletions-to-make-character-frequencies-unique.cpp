class Solution {
public:
    int minDeletions(string s) {
     map<char,int> mp;
     int cnt=0;
     for(auto i:s) mp[i]++;
     set<int> st;
     for(auto i:mp){
         int x = i.second;
         if(st.find(x)==st.end()) st.insert(x);
         else{
             while(x>0){
                 cnt++;
                 x--;
                 if(st.find(x)== st.end()) {
                     st.insert(x);
                     break;
                 }
             }
         }
     }
     return cnt;
    }
};