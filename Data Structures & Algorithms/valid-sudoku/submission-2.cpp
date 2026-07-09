class Solution {
public:
    bool valid_box(vector<vector<char>>& bd,int sr,int er,int sc,int ec){
        unordered_set<char>st;
        for(int i=sr;i<=er;i++){
            for(int j=sc;j<=ec;j++){
                if(bd[i][j]=='.') continue;
                if(st.find(bd[i][j])!=st.end()) return false;
                st.insert(bd[i][j]);
            }

        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& bd) {
        // checking for row 
        // i->row , j-> col
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(bd[i][j]=='.') continue;
                if(st.find(bd[i][j])!=st.end()) return false;
                st.insert(bd[i][j]);
            }
        }
        // checking for col
        for(int j=0;j<9;j++){
            unordered_set<char>st;
            for(int i=0;i<9;i++){
                if(bd[i][j]=='.') continue;
                if(st.find(bd[i][j])!=st.end()) return false;
                st.insert(bd[i][j]);
            }
        }
        // checking for boxes 

        for(int sr=0;sr<9;sr+=3){
            int er=sr+2;
            for(int sc=0;sc<9;sc+=3){
                int ec=sc+2;
                if(!valid_box(bd,sr,er,sc,ec)) return false;
            }
        }
        return true;
        
    }
};