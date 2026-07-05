class Solution {
public:
    int search(vector<int>& nums, int tgt) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        // remember this s<=e
        while(s<=e){
            int mid=s+(e-s)/2;
            int x=nums[mid];
            if(x==tgt)  return mid;
            else if(x<tgt) s=mid+1;
            else e=mid-1;
        }

        return -1;
        
    }
};
