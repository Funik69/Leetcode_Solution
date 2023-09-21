class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int x= n1+n2,v1,v2;
        int k=0,i=0,j=0;
        while(k<= x/2){
            v1=v2;
            if(i<n1 and (j>=n2 || nums1[i] <=nums2[j])){
                v2=nums1[i];
                i++;
            }
            else {
                v2=nums2[j];
                j++;
            }
            k++;
        }
        if(x%2==0){
            return (v1+v2)/2.0;
        }
        return v2;
    }
};