class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int tgt) {
        int n=mt.size();
        int m=mt[0].size();

        int s=0;
        int e=m*n-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            int row=mid/m;
            int col=mid%m;
            int x=mt[row][col];
            if(x==tgt) return true;
            else if(x<tgt) s=mid+1;
            else e=mid-1;
        }
        return false;
    }
};
