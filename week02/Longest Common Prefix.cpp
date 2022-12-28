//  TC- o(nlogn) + o(n)        // n - length of vector strs 
//  MC - o(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        int max_length = strs[strs.size()-1].size();
        
        string first_string = strs[0];
        string last_string = strs[strs.size()-1];
        
        int  index=0;
        while(index<max_length && first_string[index]==last_string[index]) 
        index++;

        string common_prefix = first_string.substr(0,index);


        return common_prefix;






    

    }
};