class Solution {
public:
    vector<int> plusOne(vector<int>& dgt) {
        int n=dgt.size();
        dgt[n-1]++;
        for(int i=n-1;i>0;i--){
            if(dgt[i]==10){
                dgt[i]=0;
                dgt[i-1]++;
            }
        }
        if(dgt[0]==10){
            dgt[0]=1;
            dgt.push_back(0);
        }
        return dgt;
        
    }
};
