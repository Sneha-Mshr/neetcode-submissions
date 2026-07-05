class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[s]){
                ans=min(nums[s],ans);
                s=mid+1;
            }else {
                ans=min(nums[mid],ans);
                e=mid-1;
            }
        }
        return ans;
    }
};
