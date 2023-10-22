class Solution {
public:
    int maximumScore(vector<int>& A, int k) {
        int ans = A[k], mini = A[k], i = k, j = k, n = A.size();
        while (i > 0 or j < n - 1) {
            if(i==0) j++;
            else if(j==n-1) i--;
            else if(A[i-1]<A[j+1]) j++;
            else i--;
            mini = min(mini,min(A[i],A[j]));
            ans = max(ans, mini * (j - i + 1));
        }
        return ans;
    }
};