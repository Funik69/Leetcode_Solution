class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> right,left;
        int n =height.size();
        int mx=height[0];
        for(auto i:height){
            mx=max(mx,i);
            left.push_back(mx);
        }
        mx=height[n-1];
        for(int i=n-1;i>=0;i--){
            mx=max(mx,height[i]);
            right.push_back(mx);
        }
        reverse(right.begin(),right.end());
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=min(right[i],left[i])-height[i];
        }
        return sum;
    }
};