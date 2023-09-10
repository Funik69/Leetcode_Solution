class Solution {
public:
    int hIndex(vector<int>& c) {
       sort(c.begin(),c.end(),greater<int>());
       int i=0;
       while(i<c.size() && c[i]>i) i++;
       return i;
    }
};