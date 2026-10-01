class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans = "";

        for(int i=0; i<s.size(); i++) {
            st.push(s[i]);

            if(!ans.empty() && ans.back() == s[i]) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};