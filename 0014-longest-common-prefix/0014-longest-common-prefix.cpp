class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = "";
        int minLen = strs[0].length();
        for (const auto& str : strs) {
            minLen = min(minLen, (int)str.length());
        }
        for (int i = 0; i < minLen; i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != c) {
                    return prefix;
                }
            }
            prefix += c;
        }
        return prefix;
    }
};