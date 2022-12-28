// TC - o(N*w*log(s))
// MC - o(n)

class Solution {
public:

    vector<int>index_of[26];
    
    bool issubseq(string &wd){
        int last_index= -1;

        for(int i=0;i<wd.size();i++)
        {
            int ch = wd[i]-'a';
            int target_pos = upper_bound(index_of[ch].begin(),index_of[ch].end(),last_index) - index_of[ch].begin();
            if(target_pos==index_of[ch].size())
            return false;
            last_index = index_of[ch][target_pos];
        }
        return true;
    }


    int numMatchingSubseq(string s, vector<string>& words) {
        

        for(int i=0;i<26;i++)
        {
            index_of[i].clear();
        }
        for(int i=0;i<s.size();i++)
        {
            index_of[s[i]-'a'].push_back(i);
        }
        int matches=0;
        for(auto &wd :words)
        {
            matches+=issubseq(wd);
        }

    return matches;

    }
};