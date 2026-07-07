class Solution {
public:
    int fun(int n){
        int sum=0;
        while(n>0){
            int x = n%10;
            sum+=(x*x);
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int>st;

        while(n>0){
            if(st.find(n)!=st.end()) return false;
            st.insert(n);
            int digSqrt = fun(n);
            n = digSqrt;
            if(n==1) return true;
        }
      return false;
    }
};
