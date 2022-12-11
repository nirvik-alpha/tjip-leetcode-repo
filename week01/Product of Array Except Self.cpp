// TC - o(n)+ o(n)
// MC - o(1)

class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
       
      
        vector<int>v;
        int prod =1;
        for(int i=0;i<nums.size();i++)
        {
            prod  *= nums[i];
            v.push_back(prod);
        }
       int product =1;
        for(int i =nums.size()-1;i>0;i--)
        {
            v[i] = v[i-1]*product;
            product *= nums[i];
        }

        v[0] = product;


    return v;
        
    }
};