// TC- o(n)
// MC - o(n)

class Solution {
public:
    int findLongestSubstringWithUniqueChar(string &s, int k, int uniqueCharThresold) {
        int maxLen = 0, L = 0, R = 0;
        int uniqueCharInWindow = 0;
        int cntCharAtLeastK = 0;
        vector<int> freq(256, 0);

        while(R < s.size()) {
            freq[s[R]]++;
            uniqueCharInWindow += (freq[s[R]] == 1);
            cntCharAtLeastK += (freq[s[R]] == k);
            R++;
            while(uniqueCharInWindow > uniqueCharThresold) {
                freq[s[L]]--;
                uniqueCharInWindow -= (freq[s[L]] == 0);
                cntCharAtLeastK -= (freq[s[L]] == k - 1);
                L++;
            }
            if(uniqueCharInWindow == cntCharAtLeastK)
                maxLen = max(maxLen, R - L);
        }
        return maxLen;
    }
    int longestSubstring(string s, int k) {
        int maxLen = 0;
        for(int uniqueChar = 1; uniqueChar <= 26; uniqueChar++) {
            maxLen = max(maxLen, findLongestSubstringWithUniqueChar(s, k, uniqueChar));
        }
        return maxLen;
    }
};
