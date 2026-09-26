class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        unordered_map<string, string> mp;
        
        for(auto x : knowledge) {
            mp[x[0]] = x[1];
        }
        
        string res = "";
        int i = 0;
        
        while(i < s.size()) {
            
            if(s[i] == '(') {
                
                i++;
                string temp = "";
                
                while(s[i] != ')') {
                    temp.push_back(s[i]);
                    i++;
                }
                
                if(mp.count(temp)) {
                    res += mp[temp];
                }
                else {
                    res += "?";
                }
                
                i++; // skip ')'
            }
            else {
                res.push_back(s[i]);
                i++;
            }
        }
        
        return res;
    }
};