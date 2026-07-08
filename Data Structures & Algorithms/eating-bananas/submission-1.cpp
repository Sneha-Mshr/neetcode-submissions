class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int n=p.size();
        int s=1;
        int e=*max_element(p.begin(),p.end());
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hrs=0;
            for(auto it:p){
                hrs+=(it+mid-1)/mid;
            }
            if(hrs<=h) {
                ans=mid;
                e=mid-1;
            }else s=mid+1;
        }
        return ans;
        
    }
};
