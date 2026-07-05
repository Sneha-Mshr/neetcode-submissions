class Solution {
public:
    int search(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==k) return mid;
            // left sorted
            else if(nums[s]<=nums[mid]){
                if(nums[s]<=k and k<=nums[mid]) e=mid-1;
                else s=mid+1;
            }
            // right part is sorted
            else {
                if(nums[e]>=k and k>=nums[mid]) s=mid+1;
                else e=mid-1;
            }
        }
        return -1;
    }
};
