class Solution {
public:
    int candy(vector<int>& rate) {
        int sum=0;
        int n=rate.size();
        vector<int> pre(n,1),suf(n,1);
        for(int i=1;i<n;i++){
            if(rate[i]>rate[i-1]) pre[i]=pre[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(rate[i]>rate[i+1]) suf[i]=suf[i+1]+1;
        }
        for(int i=0;i<n;i++){
            sum+=max(pre[i],suf[i]);
        }
        return sum;
    }
};

//1 1 2
//2 1 1 