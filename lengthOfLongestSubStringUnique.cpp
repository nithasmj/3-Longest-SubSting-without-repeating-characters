class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int res = 0;
    unordered_set<char> charSet;
    int l=0, r =0;

    for(; r < s.length(); r++) {
        while(charSet.find(s[r])!= charSet.end()) {
            charSet.erase(s[l]);
            l++;
        }
        charSet.insert(s[r]);
        res = max(res, r-l+1);
    }
    return res;
    }
};
