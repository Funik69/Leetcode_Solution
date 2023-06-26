class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ress=0;
        priority_queue<int,vector<int>,greater<int>> pq1,pq2;
        int cnt = 0,i=0;
        int j=costs.size()-1;

        while(cnt<k){

            while(pq1.size()<candidates && i<=j) pq1.push(costs[i++]);
            while(pq2.size()<candidates && i<=j) pq2.push(costs[j--]);

            int cost1 = pq1.size()>0?pq1.top():INT_MAX;
            int cost2 = pq2.size()>0?pq2.top():INT_MAX;

            if(cost1<=cost2){
               ress += cost1;
               pq1.pop();
            }
            else{
              ress += cost2;
              pq2.pop();
            }
            cnt++;
        }
        return ress;
    }
};