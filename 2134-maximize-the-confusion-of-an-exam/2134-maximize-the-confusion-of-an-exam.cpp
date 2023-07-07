class Solution {
public:
    int maxConsecutiveAnswers(string key, int k){
        int i = 0, j = 0, Tcnt = 0, Fcnt = 0, ans = INT_MIN;
        for(int j=0; j<key.size(); j++){
            if(key[j] == 'T') Tcnt++;
            else Fcnt++;

            while(Tcnt > k && Fcnt > k){
                if (key[i++] == 'T') Tcnt--;
                else Fcnt--;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};