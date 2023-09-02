class Solution {
public:
    int minExtraChar(const string& str, const vector<string>& dictionary){
        int si = str.size();
        vector<string> tm= dictionary;
        sort(tm.begin(), tm.end(), [](const string& x, const string& y) { return x.size() > y.size(); });
        vector<int> cont(si+1,0); 
        for (int i=1;i<=si;i++){
            cont[i]= cont[i-1]+1; 
            for (auto k : tm) {
                int N = k.size();
                if (i >= N && str.substr(i - N, N) == k) cont[i] = min(cont[i], cont[i - N]);
            }
        }
        return cont[si];
    }
};