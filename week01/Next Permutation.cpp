//TC : o(n)+o(n)+o(n)= o(n)
//MC : o(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
         int t,s;
        for( int i =n-2; i>=0;i--)
        {
           if(nums[i]<nums[i+1])
           {
               t=i;
               break;
           } 
        }

        if(t<0)
        {
            reverse(nums.begin(),nums.end());
        }else{
            for( int j=n-1;j>t;j--)
            {
                if(nums[j]>nums[t])
                {
                    s= j;
                    break;
                }
            }
            swap(nums[t],nums[s]);
            reverse(nums.begin()+t+1, nums.end());
        }

        
    }
};