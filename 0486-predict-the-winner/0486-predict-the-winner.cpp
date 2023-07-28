class Solution {
public:
int soll(int i,int j,vector<int> & nums){
    if(i>j) return 0;
    int t1=nums[i]-soll(i+1,j,nums);
    int t2=nums[j]-soll(i,j-1,nums);
    return max(t1,t2);
}
    bool PredictTheWinner(vector<int>& nums) {
        return soll(0,nums.size()-1,nums)>=0;
    }
};