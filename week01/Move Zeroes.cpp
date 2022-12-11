// TC - o(N*z) ---> z- count of zeros ,  N- vector size
// MC - o(

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int>v;
        int z=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                z++;
            else
                v.push_back(nums[i]);
        }
        while(z--)
        {
            v.push_back(0);
        }
        
      nums =v;
    }
};