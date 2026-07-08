class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        // taking hash map to store the corresponding idx
        vector<int>mp(256,-1);
        int l = 0, r= 0, maxlen = 0;
        while(r<n){
            //  if any duplicate char then shring the window 
            if(mp[s[r]]!=-1){
                l = max(mp[s[r]]+1,l);
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            // mapping the char with idx
            mp[s[r]]=r;
            r++;
        }
        return maxlen;
        
    }
};