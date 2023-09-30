class Solution {
public:
    bool find132pattern(vector<int>& nums) {
    stack<int> st;
    int val =INT_MIN;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]<val) return true;
        while(!st.empty() and nums[i]>st.top()){
            val = st.top();
            st.pop();
        }
        st.push(nums[i]);
    }
       return false;

    }
};