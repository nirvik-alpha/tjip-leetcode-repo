// TC  - o(n*n)
// MC - o(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>store;
        for(int i=0;i<nums.size();i++)
        {
            int a = nums[i];
            int L = i+1;
            int R= nums.size()-1;
            int target= -a;
            while(L<R)
            {
            if(nums[L]+nums[R]>target)R--;
            else if(nums[L]+nums[R]<target)L++;
            else{
                int b = nums[L];
                int c = nums[R];
                while(L+1<R && nums[L+1]==b)
                    L++;
                while(L<R-1 && nums[R-1]==c)
                    R--;
            store.push_back({a,b,c});
            L++;
            R--;
            }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])i++;
        }

    return store;

    }
};