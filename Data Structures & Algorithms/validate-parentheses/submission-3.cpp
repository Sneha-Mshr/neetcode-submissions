class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for (int i=0;i<s.size();i++) {
            // openning 
            if (s[i]=='('||s[i]=='{'|| s[i]=='[') {
                st.push(s[i]);
            }
            // closing 
            else {
                // empty h ya nahi
                   if (st.empty()) {
                    return false ;
                     }
                    else if (s[i]==')') {
                    if (st.top()!='(') {
                    return false ;
                    }
                     else {
                    st.pop();
                    }
                }
                else if (s[i]=='}') { 
                    if (st.top()!='{') {
                    return false;
                     }
                     else {
                    st.pop();
                    }
                }
                else {
                      if (st.top()!='[') {
                      return false;
                     }
                     else {
                    st.pop();
                    }
                }
            }
        }
        return st.empty();
    }
};