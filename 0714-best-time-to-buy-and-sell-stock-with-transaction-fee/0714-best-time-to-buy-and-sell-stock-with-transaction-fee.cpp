class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
       int buy=0;
        int sell=-p[0];
        for(int i=1;i<p.size();i++){
            buy=max(buy,p[i]+sell-fee);
            sell=max(sell,buy-p[i]);
        }
   return buy; }
};