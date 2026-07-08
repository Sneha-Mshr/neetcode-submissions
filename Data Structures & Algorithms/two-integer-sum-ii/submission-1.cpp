class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tgt) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            int x=nums[i];
            int y=nums[j];
            if((x+y)==tgt) return {i+1,j+1};
            else if((x+y)<tgt) i++;
            else j--;
        }
        return {};
    }
};
