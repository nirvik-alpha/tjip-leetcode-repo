// TC -0(N+26) 
// MC - 0(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int>freq(26,0);
        for(auto u:s)
        {
            freq[u-'a']++;
        }
        for(auto u:t)
        {
            freq[u-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            return false;
        }
        return true;


    }
};