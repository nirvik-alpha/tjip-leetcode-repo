// TC - o(n)
// MC - o(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int L=0, R=0, max_len=0;
        int dupcnt =0, kallowed =1;

        while(R<s.size())
        {
            freq[s[R]]++;
            if(freq[s[R]]>kallowed)
            dupcnt++;
            while(dupcnt>0)
            {
                freq[s[L]]--;
                if(freq[s[L]]==kallowed)
                dupcnt--;
                L++;
            }
            max_len = max(max_len , R-L+1);
            R++;
        }

    return max_len;


    }
};