class Solution {
public:
    bool isNice(const string& sub) {
        unordered_set<char> lower, upper;
        for (char c : sub) {
            if (islower(c))
                lower.insert(c);
            else
                upper.insert(c);
        }

        for (char c : sub) {
            if (islower(c) && !upper.count(toupper(c)))
                return false;
            if (isupper(c) && !lower.count(tolower(c)))
                return false;
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                if (isNice(sub)) {
                    if (sub.size() > ans.size()) {
                        ans = sub;
                    }
                }
            }
        }
        return ans;
    };
};