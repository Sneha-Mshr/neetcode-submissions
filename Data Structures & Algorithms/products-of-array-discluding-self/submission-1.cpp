class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans(n),prefix(n,1),suffix(n,1);

       int pre=1;
       int suf=1;


        for(int i=1;i<n;i++){
           pre*=nums[i-1];
           suf*=nums[n-i];

           prefix[i]=pre;
           suffix[n-(i+1)]=suf;
        }

        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
       
    }
};
