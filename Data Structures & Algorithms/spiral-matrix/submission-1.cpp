class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mtx) {
        int n=mtx.size();
        int m=mtx[0].size();
        vector<int>ans;
        int rowS=0;
        int rowL=n-1;
        int colS=0;
        int colL=m-1;
       while(rowS<=rowL && colS<=colL){
            for(int i=colS;i<=colL;i++){
                ans.push_back(mtx[rowS][i]);
            }
            rowS++;
            for(int i=rowS;i<=rowL;i++){
                ans.push_back(mtx[i][colL]);
            }
            colL--;
            if (rowS<= rowL) {
                for (int i = colL; i >= colS; i--) {
                    ans.push_back(mtx[rowL][i]);
                }
            rowL--;
            }
            if (colS <= colL) {
                for (int i = rowL; i >= rowS; i--) {
                        ans.push_back(mtx[i][colS]);
                }
                colS++;
            }
       }
       return ans;
    }
};