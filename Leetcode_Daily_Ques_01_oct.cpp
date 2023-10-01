


// Leetcode     557

class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                st.push(s[i]);
            } else {
                while (!st.empty()) {
                    ans += st.top();
                    st.pop();
                }
                ans += ' '; // Add space between word
            }
        }
      while (!st.empty()) {      // for last word this loop is neccesary 
            ans += st.top();
            st.pop();
        }
      
        return ans;
    }
};







