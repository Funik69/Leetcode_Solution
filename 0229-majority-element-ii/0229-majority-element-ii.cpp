class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> mp;
        set<int> v;
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > nums.size()/3)
            v.insert(nums[i]);
        }
        for(auto i:v)
            s.push_back(i);
    return s;}
};