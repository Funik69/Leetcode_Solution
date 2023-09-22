class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int i=0,j=arr.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid]== target) return mid;
            else if(arr[mid]>target) j=mid-1;
            else i=mid+1;
        }
        return i;
    }
};