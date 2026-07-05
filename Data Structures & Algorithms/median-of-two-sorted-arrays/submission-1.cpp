class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> temp (m+n);
        int k=0,i=0,j=0;
        while(i< n && j<m){
            if(nums1[i]<=nums2[j]) temp[k++]=nums1[i++];
            else temp[k++] = nums2[j++];
        }
        while(i<n) temp[k++]=nums1[i++];
        while(j<m) temp[k++]= nums2[j++];
        double ans;
        int x = m+n;
        if(x%2==1) {
            int z = x/2;
            ans = double(temp[z]);
        }else {
            int p = x/2;
            int q = x/2-1;
            ans = double(temp[p]+temp[q])/2.0;
        }

        return ans;
    }
};
