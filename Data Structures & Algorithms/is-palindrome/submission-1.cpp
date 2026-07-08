class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n<=1) return true;
        string ans="";
        for(int i=0;i<n;i++){
          if(s[i]>='A' and s[i]<='Z') ans+=tolower(s[i]);
          if(s[i]>='a' and s[i]<='z') ans+=s[i];
          if(s[i]>='0' and s[i]<='9') ans+=s[i];
        }
        int i=0,j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
