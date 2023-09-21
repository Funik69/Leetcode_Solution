class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string ans = "";
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 or j>=0 or carry ){
            if(i>=0){
                carry+=a[i--]-'0';
            }
            if(j>=0){
                carry+=b[j--]-'0';
            }
            ans.push_back((carry%2) + '0');
            carry/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};