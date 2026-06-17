class Solution {
public:
    string processStr(string s) {
        string res="";

        for (char &it : s) {
            if (it == '#') {
                   res+=res;
            }
            else if (it == '%') {
                reverse(res.begin(), res.end());
            }
            else if (it == '*') {
                if (!res.empty()) {
                    res.pop_back();
                }
            }
            else {
                res.push_back(it);
            }
        }

        return res;
    }
};