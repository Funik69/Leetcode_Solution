class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt=1;
       int val=nums[0];
       for(int i=1;i<nums.size();i++){
           if(nums[i]==val) cnt++;
           else cnt--;

           if(cnt==0){
               cnt=1;
               val=nums[i];
           }
       }
       return val;
    }
};