class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                
if (s.empty()) return 0;
    std::unordered_set<char> hs;
    int i = 0, j = 0, maxLength = 0;

    while (j < s.length()) {
        if (hs.find(s[j]) == hs.end()) {
            hs.insert(s[j]);
            maxLength = std::max(maxLength, j - i + 1);
            j++;
        } else {
            hs.erase(s[i]);
            i++;
        }
    }
    return maxLength;
    }
};