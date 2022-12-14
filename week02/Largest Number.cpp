// TC - o(nlogn)
// MC - o(n)

class Solution {
public:
    static bool compare(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        string Largest_Number = "";
        vector<string> store;

        for(auto c : nums)
            store.push_back(to_string(c));

        sort(store.begin(), store.end(), compare);
        
        for(int i = 0; i < store.size(); i++)
         {
            Largest_Number += store[i];
        }
        return Largest_Number[0] == '0' ? "0" : Largest_Number;
    }
};